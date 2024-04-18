m = 1

for i in range(3):
    m *= int(input())

for i in range(10):
    print(str(m).count(str(i)))