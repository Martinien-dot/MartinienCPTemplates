t = int(input())
for _ in range(t):
    x, y = [int(i) for i in input().split()]
    res = y//2
    c1x1 = res*7
    if y%2==1:
        res+=1
        c1x1+=11
    temp = x-c1x1
    if temp>0:
        res+=temp//15
        if temp%15>0:
            res+=1
    print(res)