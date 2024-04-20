k = list()
pos = [0, 0]
max = 0

for i in range(9):
    k.append(list(map(int, input().split())))

for col in range(9):
    for row in range(9):
        if k[col][row] >= max:
            pos = [col + 1, row + 1]
            max = k[col][row]

print(max)
print(" ".join(list(map(str, pos))))