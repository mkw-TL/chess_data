# Author Joe Harrison
# https://github.com/mkw-TL/chess_data

import io
import os
import zstandard as zstd
from pathlib import Path
import psycopg
from psycopg import sql
import time
import math
import cProfile

file = Path("C:\\Users\\JoeH\\Downloads\\lichess_db_standard_rated_2023-05.pgn.zst")
DCTX = zstd.ZstdDecompressor(max_window_size=2**31)

# Connect to your postgres DB
conn = psycopg.connect("dbname=test user=JoeH password=a")
# # Open a cursor to perform database operations
cur = conn.cursor()


def set_tables():
    meta_dict = {
        "game_id": "bigint",
        "rated": "boolean",
        "bullet": "boolean",
        "blitz": "boolean",
        "rapid": "boolean",
        "classical": "boolean",
        "correspond": "boolean",
        "event": "text",
        "white_won": "boolean",
        "draw": "boolean",
        "white_elo": "float",
        "black_elo": "float",
        "white_rating_diff": "float",
        "black_rating_diff": "float",
        "eco": "char(3)",
        "opening": "text",
        "time_control": "float",
        "termination": "text",
        "increment": "boolean",
        "increment_amount": "float",
        "site": "text",
    }

    result = ", ".join([f"{key} {value}" for key, value in meta_dict.items()])

    drop_statement1 = sql.SQL("DROP TABLE IF EXISTS metadata;")
    create_statement1 = sql.SQL(
        f"""CREATE TABLE metadata
                ({result});"""
    )
    unlog_statement1 = sql.SQL("ALTER TABLE metadata SET UNLOGGED;")
    cur.execute(drop_statement1)
    cur.execute(create_statement1)
    cur.execute(unlog_statement1)

    # it seems like "int" is not a valid field accepted by postgres
    game_dict = {
        "length": "float",
        "game_number_of_blunders": "float",
        "number_of_white_blunders": "float",
        "number_of_black_blunders": "float",
        "game_number_of_mistakes": "float",
        "number_of_white_mistakes": "float",
        "number_of_black_mistakes": "float",
        "game_number_of_inaccuracies": "float",
        "number_of_white_inaccuracies": "float",
        "number_of_black_inaccuracies": "float",
        "has_evals": "boolean",
        "has_annotations": "boolean",
        "game_checks": "float",
        "game_black_checks": "float",
        "game_white_checks": "float",
        "game_captures": "float",
        "game_white_captures": "float",
        "game_black_captures": "float",
        "game_promotions": "float",
        "game_black_promotions": "float",
        "game_black_q_promotions": "float",
        "game_black_n_promotions": "float",
        "game_black_b_promotions": "float",
        "game_black_r_promotions": "float",
        "game_white_promotions": "float",
        "game_white_q_promotions": "float",
        "game_white_n_promotions": "float",
        "game_white_b_promotions": "float",
        "game_white_r_promotions": "float",
        "potentially_ambigous_moves": "float",
        "game_black_q_castle": "boolean",
        "game_black_k_castle": "boolean",
        "game_white_q_castle": "boolean",
        "game_white_k_castle": "boolean",
        "game_id": "bigint",
    }

    result = ", ".join([f"{key} {value}" for key, value in game_dict.items()])

    drop_statement2 = sql.SQL("DROP TABLE IF EXISTS game_data;")
    create_statement2 = sql.SQL(
        f"""CREATE TABLE game_data
                ({result});"""  # DONT USE TABLESPACE USB
    )
    unlog_statement2 = sql.SQL("ALTER TABLE game_data SET UNLOGGED;")
    cur.execute(drop_statement2)
    cur.execute(create_statement2)
    cur.execute(unlog_statement2)

    white_dict = {
        "game_id": "bigint",
        "move_num": "float",
        "evals": "float",
        "timestamps_white": "float",
        "game_white_piece_data": "text",
        "game_white_location_data": "text",
        "game_white_captures_data": "boolean",
        "game_white_castle_data": "boolean",
        "game_white_checks_data": "boolean",
        "game_white_promotions_data": "boolean",
        "checkmate_possible": "boolean",
        "num_moves_til_mate": "float",
    }

    result = ", ".join([f"{key} {value}" for key, value in white_dict.items()])

    drop_statement3 = sql.SQL("DROP TABLE IF EXISTS white_data;")
    create_statement3 = sql.SQL(
        f"""CREATE TABLE white_data
            ({result});"""
    )
    unlog_statement3 = sql.SQL("ALTER TABLE white_data SET UNLOGGED;")
    cur.execute(drop_statement3)
    cur.execute(create_statement3)
    cur.execute(unlog_statement3)

    black_dict = {
        "game_id": "bigint",
        "move_num": "float",
        "evals": "float",
        "timestamps_black": "float",
        "game_black_piece_data": "text",
        "game_black_location_data": "text",
        "game_black_captures_data": "boolean",
        "game_black_castle_data": "boolean",
        "game_black_checks_data": "boolean",
        "game_black_promotions_data": "boolean",
        "checkmate_possible": "boolean",
        "num_moves_til_mate": "float",
    }

    result = ", ".join([f"{key} {value}" for key, value in black_dict.items()])

    drop_statement4 = sql.SQL("DROP TABLE IF EXISTS black_data;")
    create_statement4 = sql.SQL(
        f"""CREATE TABLE black_data
            ({result});"""
    )
    unlog_statement4 = sql.SQL("ALTER TABLE black_data SET UNLOGGED;")
    cur.execute(drop_statement4)
    cur.execute(create_statement4)
    cur.execute(unlog_statement4)
    conn.commit()

    meta_columns = meta_dict.keys()
    meta_sql = ", ".join(meta_columns)
    meta_sql = "(" + meta_sql + ")"

    game_columns = game_dict.keys()
    game_sql = ", ".join(game_columns)
    game_sql = "(" + game_sql + ")"

    white_columns = white_dict.keys()
    white_sql = ", ".join(white_columns)
    white_sql = "(" + white_sql + ")"

    black_columns = black_dict.keys()
    black_sql = ", ".join(black_columns)
    black_sql = "(" + black_sql + ")"

    return (meta_sql, game_sql, white_sql, black_sql)


def insert_into_db(full_parsed_game, current_counter_val, data_dict, sql_tuple):
    num_of_entries_at_once = 1000
    counter_val = current_counter_val % num_of_entries_at_once

    dict_meta_copy = full_parsed_game["metadata"].copy()
    dict_game_copy = full_parsed_game["game_data"].copy()
    del dict_game_copy["long_data"]
    dict_white_copy = full_parsed_game["game_data"]["long_data"]["white"].copy()
    dict_black_copy = full_parsed_game["game_data"]["long_data"]["black"].copy()

    data_dict["meta_list"][counter_val] = dict_meta_copy
    data_dict["game_list"][counter_val] = dict_game_copy
    data_dict["white_list"][counter_val] = dict_white_copy
    data_dict["black_list"][counter_val] = dict_black_copy

    if counter_val == 999:
        try:
            meta_vals = [
                tuple(
                    d.values(),
                )
                for d in data_dict["meta_list"]
            ]
        except:
            print([d for d in data_dict["meta_list"]])

        game_vals = [
            tuple(
                d.values(),
            )
            for d in data_dict["game_list"]
        ]

        white_vals = [zip(*d.values()) for d in data_dict["white_list"]]

        black_vals = [zip(*d.values()) for d in data_dict["black_list"]]

        data_dict = {
            "meta_list": [None] * 1000,
            "game_list": [None] * 1000,
            "white_list": [None] * 1000,
            "black_list": [None] * 1000,
        }

        meta_statement = "COPY metadata " + str(sql_tuple[0]) + " FROM STDIN"
        game_statement = "COPY game_data " + str(sql_tuple[1]) + " FROM STDIN"
        white_statement = "COPY white_data " + str(sql_tuple[2]) + " FROM STDIN"
        black_statement = "COPY black_data " + str(sql_tuple[3]) + " FROM STDIN"

        with cur.copy(meta_statement) as meta_copy:
            for meta_record in meta_vals:
                meta_copy.write_row(meta_record)

        with cur.copy(game_statement) as game_copy:
            for game_record in game_vals:
                game_copy.write_row(game_record)

        with cur.copy(white_statement) as white_copy:
            for white_record in white_vals:
                for tpl in white_record:
                    white_copy.write_row(tpl)

        with cur.copy(black_statement) as black_copy:
            for black_record in black_vals:
                for tpl in black_record:
                    black_copy.write_row(tpl)
        conn.commit()


def read_lines_from_zst_file(file):
    with (
        zstd.open(file, mode="rb", dctx=DCTX) as zfh,
        io.TextIOWrapper(zfh) as iofh,
    ):
        for line in iofh:
            yield line


def def_metadata():
    metadata = {
        "game_id": 0,
        "rated": True,
        "bullet": False,
        "blitz": True,
        "rapid": False,
        "classical": False,
        "correspond": False,
        "event": "",
        "white_won": True,
        "draw": False,
        "white_elo": -1,
        "black_elo": -1,
        "white_rating_diff": -1,
        "black_rating_diff": -1,
        "eco": "Z99",
        "opening": "Unknown",
        "time_control": -100,
        "termination": "KO",
        "increment": False,
        "increment_amount": -1,
        "site": "",
    }
    return metadata


def def_game_data(size):
    if size % 2 == 0:
        white_dat = {
            "game_id": [None] * int(size / 2),
            "move_num": [None] * int(size / 2),
            "evals": [None] * int(size / 2),
            "timestamps_white": [None] * int(size / 2),
            "game_white_piece_data": [None] * int(size / 2),
            "game_white_location_data": [None] * int(size / 2),
            "game_white_captures_data": [None] * int(size / 2),
            "game_white_castle_data": [None] * int(size / 2),
            "game_white_checks_data": [None] * int(size / 2),
            "game_white_promotions_data": [None] * int(size / 2),
            "checkmate_possible": [None] * int(size / 2),
            "num_moves_til_mate": [None] * int(size / 2),
        }

        black_dat = {
            "game_id": [None] * int(size / 2),
            "move_num": [None] * int(size / 2),
            "evals": [None] * int(size / 2),
            "timestamps_black": [None] * int(size / 2),
            "game_black_piece_data": [None] * int(size / 2),
            "game_black_location_data": [None] * int(size / 2),
            "game_black_captures_data": [None] * int(size / 2),
            "game_black_castle_data": [None] * int(size / 2),
            "game_black_checks_data": [None] * int(size / 2),
            "game_black_promotions_data": [None] * int(size / 2),
            "checkmate_possible": [None] * int(size / 2),
            "num_moves_til_mate": [None] * int(size / 2),
        }
    else:
        white_dat = {
            "game_id": [None] * int((size - 1) / 2),
            "move_num": [None] * int((size - 1) / 2),
            "evals": [None] * int((size - 1) / 2),
            "timestamps_white": [None] * int((size - 1) / 2),
            "game_white_piece_data": [None] * int((size - 1) / 2),
            "game_white_location_data": [None] * int((size - 1) / 2),
            "game_white_captures_data": [None] * int((size - 1) / 2),
            "game_white_castle_data": [None] * int((size - 1) / 2),
            "game_white_checks_data": [None] * int((size - 1) / 2),
            "game_white_promotions_data": [None] * int((size - 1) / 2),
            "checkmate_possible": [None] * int((size - 1) / 2),
            "num_moves_til_mate": [None] * int((size - 1) / 2),
        }

        black_dat = {
            "game_id": [None] * int((size - 1) / 2),
            "move_num": [None] * int((size - 1) / 2),
            "evals": [None] * int((size - 1) / 2),
            "timestamps_black": [None] * int((size - 1) / 2),
            "game_black_piece_data": [None] * int((size - 1) / 2),
            "game_black_location_data": [None] * int((size - 1) / 2),
            "game_black_captures_data": [None] * int((size - 1) / 2),
            "game_black_castle_data": [None] * int((size - 1) / 2),
            "game_black_checks_data": [None] * int((size - 1) / 2),
            "game_black_promotions_data": [None] * int((size - 1) / 2),
            "checkmate_possible": [None] * int((size - 1) / 2),
            "num_moves_til_mate": [None] * int((size - 1) / 2),
        }

    game_str = {
        "game": "",
        "game_id": 0,
    }

    long_data = {
        "white": white_dat,
        "black": black_dat,
        "game_str": game_str,
    }

    game_data = {
        "length": 0,
        "game_number_of_blunders": 0,
        "number_of_white_blunders": 0,
        "number_of_black_blunders": 0,
        "game_number_of_mistakes": 0,
        "number_of_white_mistakes": 0,
        "number_of_black_mistakes": 0,
        "game_number_of_inaccuracies": 0,
        "number_of_white_inaccuracies": 0,
        "number_of_black_inaccuracies": 0,
        "has_evals": False,
        "has_annotations": False,
        "game_checks": 0,
        "game_black_checks": 0,
        "game_white_checks": 0,
        "game_captures": 0,
        "game_white_captures": 0,
        "game_black_captures": 0,
        "game_promotions": 0,
        "game_black_promotions": 0,
        "game_black_q_promotions": 0,
        "game_black_n_promotions": 0,
        "game_black_b_promotions": 0,
        "game_black_r_promotions": 0,
        "game_white_promotions": 0,
        "game_white_q_promotions": 0,
        "game_white_n_promotions": 0,
        "game_white_b_promotions": 0,
        "game_white_r_promotions": 0,
        "potentially_ambigous_moves": 0,
        "game_black_q_castle": False,
        "game_black_k_castle": False,
        "game_white_q_castle": False,
        "game_white_k_castle": False,
        "game_id": 0,
        "long_data": long_data,
    }
    return game_data


def def_fields():
    fields = {"metadata": {}, "game_data": {}}
    return fields


def record_when_events(color, move, g, move_num, fil):
    if "=" in move:
        g["game_" + color + "_promotions"] += 1
        g["game_promotions"] += 1
        g["long_data"][color]["game_" + color + "_promotions_data"][move_num] = True
        if "=Q" in move:
            g["game_" + color + "_q_promotions"] += 1
            # creates new string, but I think is worth, so we don't have to deal with edge cases
            move = move.replace("=Q", "")
        if "=B" in move:
            g["game_" + color + "_b_promotions"] += 1
            move = move.replace("=B", "")
        elif "=N" in move:
            g["game_" + color + "_n_promotions"] += 1
            move = move.replace("=N", "")
        elif "=R" in move:
            g["game_" + color + "_r_promotions"] += 1
            move = move.replace("=R", "")
    else:
        g["long_data"][color]["game_" + color + "_promotions_data"][move_num] = False

    if "+" in move:
        g["game_" + color + "_checks"] += 1
        g["game_checks"] += 1
        move = move.replace("+", "")
        g["long_data"][color]["game_" + color + "_checks_data"][move_num] = True
    else:
        g["long_data"][color]["game_" + color + "_checks_data"][move_num] = False

    if "x" in move:
        g["game_" + color + "_captures"] += 1
        g["game_captures"] += 1
        g["long_data"][color]["game_" + color + "_captures_data"][move_num] = True
        move = move.replace("x", "")
    else:
        g["long_data"][color]["game_" + color + "_captures_data"][move_num] = False

    # move = re.sub('[\!\?\#]', '', move)

    if "!!" in move:
        move = move.replace("!!", "")
        g["has_annotations"] = True

    elif "!?" in move:
        move = move.replace("!?", "")
        g["has_annotations"] = True

    elif "?!" in move:
        move = move.replace("?!", "")
        g["has_annotations"] = True

    elif "!" in move:
        move = move.replace("!", "")
        g["has_annotations"] = True

    elif "?" in move:
        move = move.replace("?", "")
        g["has_annotations"] = True

    elif "#" in move:
        move = move.replace("#", "")

    return move


def piece_ambiguator(str, g, color, move_num, dest, move):
    g["long_data"][color]["game_" + color + "_piece_data"][move_num] = str
    if len(move) == 4:
        g["potentially_ambigous_moves"] += 1
        move = move[:1] + move[2:]
    g["long_data"][color]["game_" + color + "_location_data"][move_num] = dest


def record_when_and_where_pieces(color, move, g, move_num, fil):
    if "O-O-O" in move:
        dest = "O-O-O"
        g["game_" + color + "_q_castle"] = True
        g["long_data"][color]["game_" + color + "_piece_data"][move_num] = dest
        g["long_data"][color]["game_" + color + "_location_data"][move_num] = dest
        g["long_data"][color]["game_" + color + "_castle_data"][move_num] = True
    elif "O-O" in move:
        dest = "O-O"
        g["game_" + color + "_k_castle"] = True
        g["long_data"][color]["game_" + color + "_piece_data"][move_num] = dest
        g["long_data"][color]["game_" + color + "_location_data"][move_num] = dest
        g["long_data"][color]["game_" + color + "_castle_data"][move_num] = True
    else:
        g["long_data"][color]["game_" + color + "_castle_data"][move_num] = False
        dest = move[-2:]

        if move[0] == "N":
            piece_ambiguator("N", g, color, move_num, dest, move)
        elif move[0] == "B":
            piece_ambiguator("B", g, color, move_num, dest, move)
        elif move[0] == "Q":
            piece_ambiguator("Q", g, color, move_num, dest, move)
        elif move[0] == "K":
            piece_ambiguator("K", g, color, move_num, dest, move)
        elif move[0] == "R":
            piece_ambiguator("R", g, color, move_num, dest, move)
        else:
            g["long_data"][color]["game_" + color + "_piece_data"][move_num] = "P"
            if len(move) == 3:
                g["potentially_ambigous_moves"] += 1
            g["long_data"][color]["game_" + color + "_location_data"][move_num] = dest


def annotations_and_timings(color, split_move, g, move_num, fil):
    # left index
    # NOTE: I want this to error with find, so that it can be caught in the except clause
    li = split_move[2].rfind("k")
    time = split_move[2][li + 2 : -2]
    g["long_data"][color]["timestamps_" + color][move_num] = (
        int(time[0]) * 3600 + int(time[2:4]) * 60 + int(time[5:])
    )
    l2i = split_move[2].find("eval")
    if l2i != -1:
        g["has_evals"] = True
        r2i = split_move[2].find("]")
        eval = split_move[2][l2i + 5 : r2i]
        if "#" in eval:
            g["long_data"][color]["checkmate_possible"][move_num] = True
            if "-" in eval:
                g["long_data"][color]["evals"][move_num] = -10
                eval = eval.replace("#-", "")
            else:
                g["long_data"][color]["evals"][move_num] = 10
                eval = eval.replace("#", "")
            g["long_data"][color]["num_moves_til_mate"][move_num] = eval
        else:
            g["long_data"][color]["checkmate_possible"][move_num] = False
            g["long_data"][color]["evals"][move_num] = eval
            g["long_data"][color]["num_moves_til_mate"][
                move_num
            ] = 0  # default value for not checkmate possible
    else:
        g["long_data"][color]["checkmate_possible"][move_num] = False
        g["long_data"][color]["evals"][move_num] = 0
        g["long_data"][color]["num_moves_til_mate"][move_num] = 0


def game_parser(game_data, g, fil, game_id, num_moves):  # g is our fields OF GAME
    if "eval" in game_data[:20]:
        g["has_evals"] = True

    split_game_data = game_data.split("}")
    move_num = 0
    for move_data in split_game_data:
        move_num += 1
        g["length"] = move_num
        split_move = move_data.partition("{")
        split_move_notation = split_move[0]
        # if uses ... notation, then it is black to move
        if (split_move_notation.rfind(".") != -1) and (
            split_move_notation.rfind(".")
        ) == split_move_notation.find("."):
            from_index = split_move_notation.rfind(".")
            # Find the last dot in the move
            move = split_move_notation[(from_index + 2) : -1]
            # Shouldn't be any whitespace
            g["long_data"]["white"]["move_num"][
                math.ceil((move_num - 1) / 2)
            ] = move_num
            g["long_data"]["white"]["game_id"][math.ceil((move_num - 1) / 2)] = game_id

            try:
                move = record_when_events(
                    "white", move, g, math.ceil((move_num - 1) / 2), fil
                )
            except:
                fil.write(
                    f"Exception thrown (white) (record_when_events). Game number {game_id}, move {move} \n"
                )
                fil.write(str(e) + "\n")
                fil.write(game_data)
                return True
            try:
                record_when_and_where_pieces(
                    "white", move, g, math.ceil((move_num - 1) / 2), fil
                )
            except:
                fil.write(
                    f"Exception thrown (white) (record_when_where_pieces). Game number {game_id}, move {move} \n"
                )
                fil.write(str(e) + "\n")
                fil.write(game_data)
                return True
            try:
                annotations_and_timings(
                    "white", split_move, g, math.ceil((move_num - 1) / 2), fil
                )
            except Exception as e:
                fil.write(
                    f"Exception thrown. (white) (annot_and_timings) Game number {game_id}, move {move} \n"
                )
                fil.write(
                    f"split_move is {split_move}, move_num is {move_num}, g[long_data][white] is {g['long_data']['white']} \n"
                )
                fil.write(str(e) + "\n")
                fil.write(game_data)
                return True
        # check this before black moves for the case of 1.e4 1-0
        elif (
            ("0-1" in split_move_notation)
            or ("1/2-1/2" in split_move_notation)
            or ("1-0" in split_move_notation)
        ):
            break
        else:
            from_index = split_move_notation.rfind(".")
            # Find the last dot in the move
            move = split_move_notation[(from_index + 2) : -1]
            # Shouldn't be any whitespace
            g["long_data"]["black"]["game_id"][
                math.ceil((move_num - 1) / 2) - 1
            ] = game_id
            # convert to 0 through len - 1 units of half size
            g["long_data"]["black"]["move_num"][
                math.ceil((move_num - 1) / 2) - 1
            ] = move_num

            try:
                move = record_when_events(
                    "black", move, g, math.ceil(move_num / 2) - 1, fil
                )
            except:
                fil.write(
                    f"Exception thrown. (black) (rec_when_events) Game number {game_id}, move {move} \n"
                )
                fil.write(str(e) + "\n")
                fil.write(game_data)
                return True
            try:
                record_when_and_where_pieces(
                    "black", move, g, math.ceil((move_num - 1) / 2) - 1, fil
                )
            except:
                fil.write(
                    f"Exception thrown. (black) (rec_when_where_pieces) Game number {game_id}, move {move} \n"
                )
                fil.write(str(e) + "\n")
                fil.write(game_data)
                return True
            try:
                annotations_and_timings(
                    "black", split_move, g, math.ceil((move_num - 1) / 2) - 1, fil
                )
            except:
                fil.write(
                    f"Exception thrown. (black) (annot_timings) Game number {game_id}, move {move} \n"
                )
                fil.write(str(e) + "\n")
                fil.write(game_data)
                return True

    return False


def parse_game_metadata(debug, debug_idx, fil):
    fields = def_fields()
    counter = 1
    line_num = 0
    for line in read_lines_from_zst_file(file):
        line_num += 1
        if debug and (counter == debug_idx):
            print(
                f"extra debug statement, this is your counter, line_num, and line: {counter}, {line_num}\n{line}"
            )
            fil.write("\nextra debug statement, this is your counter and line: ")
            count = str(counter) + ", " + str(line_num)
            fil.write(count)
            lin = "\n" + str(line)
            fil.write(lin)
        if "Event" in line:
            fields["metadata"] = def_metadata()
            if (
                ("Tournament" in line)
                or ("tournament" in line)
                or ("Arena" in line)
                or ("arena" in line)
            ):
                fields["metadata"]["event"] = line
        elif "Site" in line:
            fields["metadata"]["site"] = line.split('"')[1]
        if "Unrated" in line:
            fields["metadata"]["rated"] = False
        if "Correspondence" in line:
            fields["metadata"]["time_control"] = -1
            fields["metadata"]["increment_amount"] = -1
            fields["metadata"]["increment"] = False
            fields["metadata"]["correspond"] = True

        elif ("TimeControl" in line) and (fields["metadata"]["correspond"] == False):
            fields["metadata"]["time_control"] = float(line.split('"')[1].split("+")[0])
            fields["metadata"]["increment_amount"] = float(
                line.split('"')[1].split("+")[1]
            )
            if fields["metadata"]["increment_amount"] == 0:
                fields["metadata"]["increment"] = False
            else:
                fields["metadata"]["increment"] = True
        elif "Bullet" in line:
            fields["metadata"]["blitz"] = False
            fields["metadata"]["bullet"] = True
        elif "Rapid" in line:
            fields["metadata"]["blitz"] = False
            fields["metadata"]["rapid"] = True
        elif "Classical" in line and "Opening" not in line:
            fields["metadata"]["blitz"] = False
            fields["metadata"]["classical"] = True
        # no in-progress games
        elif "*" in line:
            _str = "\In progress game. Game num is" + str(counter)
            fil.write(_str)
            fil.write(line)
            continue
        elif "Result" in line and "0-1" in line:
            fields["metadata"]["white_won"] = False
        elif "Result" in line and "1/2-1/2" in line:
            fields["metadata"]["white_won"] = False
            fields["metadata"]["draw"] = True
        elif "WhiteElo" in line:
            fields["metadata"]["white_elo"] = int(line.split('"')[1])
        elif "BlackElo" in line:
            fields["metadata"]["black_elo"] = int(line.split('"')[1])
        elif "WhiteRatingDiff" in line:
            fields["metadata"]["white_rating_diff"] = int(line.split('"')[1])
        elif "BlackRatingDiff" in line:
            fields["metadata"]["black_rating_diff"] = int(line.split('"')[1])
        elif "ECO" in line:
            fields["metadata"]["eco"] = line.split('"')[1]
        elif "Opening" in line:
            fields["metadata"]["opening"] = line.split('"')[1]
        elif "Termination" in line:
            fields["metadata"]["termination"] = line.split('"')[1]
        elif line[:3] == "1. ":
            num_moves = len(line.split("{"))
            if num_moves < 3:
                continue
            fields["game_data"] = def_game_data(num_moves)
            fields["game_data"]["long_data"]["game_str"]["game"] = line
            fields["game_data"]["long_data"]["game_str"]["game_id"] = counter
            fields["metadata"]["game_id"] = counter
            fields["game_data"]["game_id"] = counter
            game_id = counter
            error = game_parser(line, fields["game_data"], fil, game_id, num_moves)
            if error:
                ctr_str = "Game parser error, and game_num = " + str(counter) + "\n"
                fil.write(ctr_str)
                fil.write(line)
                line_num_str = "line_num = " + str(line_num) + "\n"
                fil.write(line_num_str)
                continue
            # we ignore this line and then we keep parsing through the lines like nothing happened.
            counter += 1
            yield fields


def main():
    print(
        """=================================================================
        =================================================================
        =================================================================
        =================================================================
        ==================================================================
        ===================================================================
        ============================================================="""
    )
    debug = True
    debug_idx = -1
    stop_idx = 7000
    stop_on = True
    data_dict = {
        "meta_list": [None] * 1000,
        "game_list": [None] * 1000,
        "white_list": [None] * 1000,
        "black_list": [None] * 1000,
    }

    LOG_FILE = os.getcwd() + "\logs.txt"
    if os.path.exists(LOG_FILE):
        os.remove(LOG_FILE)
    if not os.path.exists(LOG_FILE):
        fil = open(LOG_FILE, "a")

    sql_tuple = set_tables()

    start_time = time.time()
    for full_parsed_game in parse_game_metadata(debug, debug_idx, fil):
        if debug:
            print(full_parsed_game["metadata"]["game_id"])
        if full_parsed_game["metadata"]["game_id"] == stop_idx:
            print("reached the end!")
            break
        if full_parsed_game["metadata"]["game_id"] % 500 == 0:
            fil.write(str(full_parsed_game["metadata"]["game_id"]) + "\n")
        insert_into_db(
            full_parsed_game,
            full_parsed_game["metadata"]["game_id"] - 1,
            data_dict,
            sql_tuple,
        )
    conn.close()
    fil.close()
    end_time = time.time()

    print("Elapsed time is", end_time - start_time)


if __name__ == "__main__":
    main()
