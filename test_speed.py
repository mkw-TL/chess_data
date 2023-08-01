import asyncio
from contextlib import contextmanager
import sys
import random
import time


table = """
CREATE TABLE customer (
        id SERIAL NOT NULL,
        name VARCHAR(255),
        description VARCHAR(255),
        q INTEGER,
        p INTEGER,
        x INTEGER,
        y INTEGER,
        z INTEGER,
        PRIMARY KEY (id)
)
"""
drop = "DROP TABLE IF EXISTS customer"

ids = list(range(10_000))
tests = 10000

data = [
    dict(
        id=i,
        name="c%d" % i,
        description="c%d" % i,
        q=i * 10,
        p=i * 20,
        x=i * 30,
        y=i * 40,
    )
    for i in ids
]

insert = """
INSERT INTO customer (id, name, description, q, p, x, y) VALUES
(%(id)s, %(name)s, %(description)s, %(q)s, %(p)s, %(x)s, %(y)s)
"""

select = """
SELECT customer.id, customer.name, customer.description, customer.q,
    customer.p, customer.x, customer.y, customer.z
FROM customer
WHERE customer.id = %(id)s
"""

url = "dbname=test user=JoeH password=a"


@contextmanager
def time_log(message):
    start = time.monotonic()
    yield
    end = time.monotonic()
    print(f"Run {message} in {end-start} s")


def run_psycopg2():
    print("Running psycopg2")
    import psycopg2

    with psycopg2.connect(url) as conn:
        with conn.cursor() as cursor:
            cursor.execute(drop)
            cursor.execute(table)
            cursor.executemany(insert, data)
        conn.commit()
    print(f"Insert done. Running {tests} queries")
    to_query = random.choices(ids, k=tests)
    with psycopg2.connect(url) as conn:
        with time_log("psycopg2"):
            for id_ in to_query:
                with conn.cursor() as cursor:
                    cursor.execute(select, {"id": id_})
                    cursor.fetchall()
                conn.rollback()

    with psycopg2.connect(url) as conn:
        with conn.cursor() as cursor:
            cursor.execute(drop)
        conn.commit()


def run_psycopg():
    print("Running psycopg sync")
    import psycopg

    with psycopg.connect(url) as conn:
        with conn.cursor() as cursor:
            cursor.execute(drop)
            cursor.execute(table)
            cursor.executemany(insert, data)
        conn.commit()
    print(f"Insert done. Running {tests} queries")
    to_query = random.choices(ids, k=tests)
    with psycopg.connect(url) as conn:
        with time_log("psycopg"):
            for id_ in to_query:
                cursor = conn.execute(select, {"id": id_})
                cursor.fetchall()
                cursor.close()
                conn.rollback()

    with psycopg.connect(url) as conn:
        with conn.cursor() as cursor:
            cursor.execute(drop)
        conn.commit()


async def run_psycopg_async():
    print("Running psycopg async")
    import psycopg

    conn: psycopg.AsyncConnection
    async with await psycopg.AsyncConnection.connect(url) as conn:
        async with conn.cursor() as cursor:
            await cursor.execute(drop)
            await cursor.execute(table)
            await cursor.executemany(insert, data)
        await conn.commit()
    print(f"Insert done. Running {tests} queries")
    to_query = random.choices(ids, k=tests)
    async with await psycopg.AsyncConnection.connect(url) as conn:
        with time_log("psycopg_async"):
            for id_ in to_query:
                cursor = await conn.execute(select, {"id": id_})
                await cursor.fetchall()
                await cursor.close()
                await conn.rollback()

    async with await psycopg.AsyncConnection.connect(url) as conn:
        async with conn.cursor() as cursor:
            await cursor.execute(drop)
        await conn.commit()


async def run_asyncpg():
    print("Running asyncpg")
    import asyncpg

    places = dict(id="$1", name="$2", description="$3", q="$4", p="$5", x="$6", y="$7")
    a_insert = insert % places
    a_select = select % {"id": "$1"}

    conn: asyncpg.Connection = await asyncpg.connect(url)
    async with conn.transaction():
        await conn.execute(drop)
        await conn.execute(table)
        await conn.executemany(a_insert, [tuple(d.values()) for d in data])
    await conn.close()
    print(f"Insert done. Running {tests} queries")
    to_query = random.choices(ids, k=tests)
    conn: asyncpg.Connection = await asyncpg.connect(url)
    with time_log("asyncpg"):
        for id_ in to_query:
            tr = conn.transaction()
            await tr.start()
            await conn.fetch(a_select, id_)
            await tr.rollback()
    await conn.close()

    conn: asyncpg.Connection = await asyncpg.connect(url)
    async with conn.transaction():
        await conn.execute(drop)
    await conn.close()


for name in sys.argv[1:]:
    if name == "psycopg2":
        run_psycopg2()
    elif name == "psycopg":
        run_psycopg()
    elif name == "psycopg_async":
        if hasattr(asyncio, "WindowsSelectorEventLoopPolicy"):
            asyncio.set_event_loop_policy(asyncio.WindowsSelectorEventLoopPolicy())
        asyncio.run(run_psycopg_async())
    elif name == "asyncpg":
        asyncio.run(run_asyncpg())
    else:
        print("unknown driver", sys.argv[1])
