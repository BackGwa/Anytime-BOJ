while True:
    uin = list(map(int, input().split()))
    if sum(uin) == 0: break
    maxin = max(uin)
    uin.remove(maxin)
    
    if uin[0] ** 2 + uin[1] ** 2 == maxin ** 2:
        print('right')
    else:
        print('wrong')