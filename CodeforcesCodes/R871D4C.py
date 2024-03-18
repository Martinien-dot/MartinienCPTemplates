t = int(input())
for _ in range(t):
    n = int(input())
    a = 1000000000000
    b = 1000000000000
    c = 1000000000000
    nh = 0
    for i in range(n):
        s = input().split()
        s1 = int(s[0])
        s2 = s[1]
        if s2=='10':
            a = min(a, s1)
        elif s2=='01':
            b = min(b, s1)
        elif s2=='11':c = min(c, s1)
        elif s2=='00':
            nh+=1
    res1 = 1000000000000
    res2 = 1000000000000
    if (a==1000000000000 or b==1000000000000) and c==1000000000000:
        print(-1)
        continue
    if a!=1000000000000 and b!=1000000000000:
        res1 = a+b
    if c!=1000000000000:
        res2 = c
    print(min(res1, res2))