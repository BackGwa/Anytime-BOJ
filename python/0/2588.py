x, y = int(input()), input()
z = [
    x * int(y[-1]),
    x * int(y[-2]),
    x * int(y[-3]),
    x * int(y)
]

print(z[0], z[1], z[2], z[3], sep="\n")