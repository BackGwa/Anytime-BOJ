for i in range(int(input())):
    h, w, n = map(int, input().split())
    x = int(n % h)
    y = (n // h) + 1
    if x == 0:
        x = h
        y -= 1
    print(f"{x}{str(y).zfill(2)}")