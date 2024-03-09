x, y = map(int, input().split())
y = y + int(input())

x += int(y / 60)
y = int(y % 60)

if x >= 24:
    x = x - 24

print(x, y, sep=" ")