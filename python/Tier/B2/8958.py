for _ in range(int(input())):
    score = 0
    x = 0
    for i in input():
        if i == "X":
            x = 0
        else:
            x += 1
            score += x * 1
        
    print(score)