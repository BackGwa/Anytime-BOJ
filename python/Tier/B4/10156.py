price, amount, money = map(int, input().split())
result = (price * amount) - money
print(0 if result < 0 else result)