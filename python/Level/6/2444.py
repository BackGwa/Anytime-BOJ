x = int(input())
for i in range(1, x + 1):
    print((x - i) * " ", end="")
    print((i * 2 - 1) * "*")

for i in range(x - 1, 0, -1):
    print((x - i) * " ", end="")
    print((i * 2 - 1) * "*")