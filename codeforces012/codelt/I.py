try:
    while True:
        s = input()
        temp = 0
        for c in s:
            if c  in ['a', 'e', 'i', 'o', 'u', 'y']:
                temp+=1
        temp2 = len(s.split())
        if temp2*2==temp:
            print('NP')
        else:
            print('P')
except:
    pass
