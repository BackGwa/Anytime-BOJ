x = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
s = input()

for i in x:
    s = s.replace(i, "_")

print(len(s))