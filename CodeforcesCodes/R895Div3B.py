t = int(input())

for _ in range(t):
    n = int(input())
    l =[]
    for i in range(n):
        l.append(list(map(int, input().split())))
    #l.sort(key=lambda x:(x[0], x[1]))
    res = 100000000000
    for x, y in l:
        temp = x+((y-1)//2)
        res = min(res, temp)
    print(res)