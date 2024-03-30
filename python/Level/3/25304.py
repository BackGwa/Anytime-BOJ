total = int(input())
amount = int(input())
result = 0

for _ in range(amount):
    x, y = map(int, input().split())
    result += x * y
    
if total == result:
    print("Yes")
else:
    print("No")