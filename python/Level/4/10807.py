t = int(input())
arr = map(int, input().split())
x = int(input())

result = 0

for i in arr:
    if i == x: result += 1

print(result)