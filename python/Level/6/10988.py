x = input()
result = 1

for i in range(len(x)):
    if x[i] != x[-(i + 1)]:
        result = 0

print(result)