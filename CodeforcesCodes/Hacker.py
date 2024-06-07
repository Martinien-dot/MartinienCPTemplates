
t = int(input())
for _ in range(t):
    k = int(input())
    n = int(input())
    arr = [int(i) for i in input().split()]
    res  = []
    f = False
    for i in range(n-1):
        for j in range(i+1, n):
            if arr[i]+arr[j]==k:
                res = [i+1, j+1]
                f = True
                break
        if f:break
    print(' '.join(str(c) for c in res))