n, m = map(int, input().split())
x = list()
y = list()

for i in range(n):
    x.append(list(map(int, input().split())))
  
for i in range(n):
    y.append(list(map(int, input().split())))
    
for index_i, item_i in enumerate(x):
    for index_j, item_j in enumerate(item_i):
        print(item_j + y[index_i][index_j], end=" ")
    print()