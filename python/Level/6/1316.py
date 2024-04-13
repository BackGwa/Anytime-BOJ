n = int(input())

for i in range(n):
    s = input()
    for j in range(len(s) - 1):
        if s[j] != s[j + 1] and s[j] in s[j + 1:]:
            n -= 1
            break

print(n)