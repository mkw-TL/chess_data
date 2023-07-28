def main():
    print("hello world")
    print("this is some test code:", 2 + 2)
    try:
        1 / 0
    except:
        main()
    print("actually need to check here too")


if __name__ == "__main__":
    try:
        main()
    except:
        main()
