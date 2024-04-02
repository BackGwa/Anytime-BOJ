for _ in range(int(input())):
    r, s = input().split()
    for i in s:
        print(int(r) * i, end="")
    print()