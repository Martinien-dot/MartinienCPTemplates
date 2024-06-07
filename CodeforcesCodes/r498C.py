n = int(input())
ar = list(map(int, input().split()))
i = 0
j = n-1
lft = ar[0]
rgt = ar[j]
res = 0
while i < j:
    if lft < rgt:
        lft+=ar[i+1]
        i+=1
    elif rgt < lft:
        rgt+=ar[j-1]
        j-=1
    else:
        res = lft
        lft+=ar[i+1]
        rgt+=ar[j-1]
        i+=1
        j-=1
print(res)
