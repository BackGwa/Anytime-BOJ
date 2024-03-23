def f(n):
    x = 1
    for i in range(1, n + 1):
        x *= i
    return x


t = int(input())


for i in range(t):
    x, y = map(int, input().split())
    z = f(y) // (f(x) * f(y - x))
    print(z)