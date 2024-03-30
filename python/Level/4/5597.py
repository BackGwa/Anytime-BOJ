solver = list(range(1, 31))

for _ in range(28):
    solver.remove(int(input()))

for i in range(2):
    print(solver[i])