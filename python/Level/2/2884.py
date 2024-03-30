x, y = map(int, input().split())

if y < 45:
    if x == 0:
        x = 23
    else:
        x -= 1
    y -= 45
    y = 60 + y
else:
    y -= 45

print(x, y, sep=" ")