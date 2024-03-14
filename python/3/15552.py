import sys

t = int(input())

for i in range(t):
    x, y = map(int, sys.stdin.readline().split())
    print(x + y)