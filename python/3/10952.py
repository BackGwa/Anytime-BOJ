while True:
    x, y = map(int, input().split())
    if x == y and x == 0:
        break
    print(x + y)