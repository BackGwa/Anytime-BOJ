x = ""
l = list()

for i in range(5):
    l.append(input().split())

for i in range(15):
    for j in l:
        try:
            x += j[0][i]
        except:
            continue

print(x)