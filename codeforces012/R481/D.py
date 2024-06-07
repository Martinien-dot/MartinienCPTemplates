res = 1e15
n = int(input())
a = [int(i) for i in input().split()]
d = [(-1,-1),(-1,0),(-1,1),(0,-1),(0,0),(0,1),(1,-1),(1,0),(1,1)]
if n<=2:
    print(0)
    exit(0)
for (d1, d2) in d:
    temp1 = a[0]+d1
    temp2 = a[1]+d2
    r = temp2-temp1
    res2 = abs(d1) + abs(d2)
    pos = True
    for i in range(2,n):
        temp3 = temp1 + (i)*r
        aide = abs(temp3-a[i])
        if aide>1:
            pos = False
            break
        else:
            if aide==1:
                res2+=1
    if pos:
        res = min(res, res2)
if n<=2:
    print(0)
elif res!=1e15:
    print(res)
else:
    print(-1)