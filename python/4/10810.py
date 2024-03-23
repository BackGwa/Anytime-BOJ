n, m = map(int, input().split())
baguni = [0 for _ in range(n)]

for _ in range(m):
    x, y, z = map(int, input().split())
    for i in range(x, y + 1):
        baguni[i - 1] = z

for i in range(n):
    print(baguni[i], end=" ")