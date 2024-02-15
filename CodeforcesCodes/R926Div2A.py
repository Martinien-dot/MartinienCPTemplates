t = int(input())
for _ in range(t):
    n = int(input())
    l = [int(i) for i in input().split()]
    l.sort()
    res = 0
    for i in range(1, n):
        res+=l[i]-l[i-1]
    print(res)