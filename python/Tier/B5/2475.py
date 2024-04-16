num = map(int, input().split())
num = map(lambda x : x * x, num)
print(sum(num) % 10)