t = int(input())
s = list(map(int, input().split()))
m = max(s)

for i in range(t):
    s[i] = s[i] / m * 100

print(sum(s) / t)