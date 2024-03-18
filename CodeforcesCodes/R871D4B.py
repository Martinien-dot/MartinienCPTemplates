t = int(input())
for _ in range(t):
    n = int(input())
    s = [int(i) for i in input().split()]
    res = 0
    i = 0
    temp = 0
    for i in range(n):
        if s[i]==0:
            temp+=1
            res = max(temp, res)
        else:temp = 0
    print(res)