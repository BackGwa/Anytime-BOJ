w = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]
s = input()
result = 0

for i in range(len(s)):
    for j in w:
        if s[i] in j:
            result += w.index(j) + 3
            
print(result)
