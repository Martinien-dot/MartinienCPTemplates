import math
t = int(input())
for _ in range(t):
    n = int(input())
    ar = [int(i) for i in input().split()]
    if ar.count(1) == 1:
        print("YES")
    elif ar.count(1)>1:
        print("NO")
    else:
        g = ar[0]
        for i in range(1, n):
            g = math.gcd(g, ar[i])
        if g==1:
            print("YES")
        else:print("NO")