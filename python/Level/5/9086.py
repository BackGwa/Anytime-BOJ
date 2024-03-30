for _ in range(int(input())):
    r = ""
    s = input()
    if len(s) == 1:
        r = 2 * s
    else:
        r = s[0] + s[-1]
    print(r)