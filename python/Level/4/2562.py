x = list()
for _ in range(9):
    x.append(int(input()))

y = max(x)
print(y, x.index(y) + 1, sep="\n")