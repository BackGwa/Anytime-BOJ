n, m = map(int, input().split())
baguni = list(range(1, n + 1))

for _ in range(m):
    i, j = map(int, input().split())
    tmp = baguni[i-1:j]
    tmp.reverse()
    baguni[i-1:j] = tmp
    
for i in range(n):
    print(baguni[i], end=" ")