t = int(input())
for _ in range(t):
    n, k = [int(i) for i in input().split()]
    adj = []
    for i in range(k):
        a, b, c = [int(j) for j in input().split()]
        adj.append([a, b, c])
    res = [1000]*(n+1)
    res[1] = 0
    for i in range(1, n):
        for a, b, c in adj:
            res[b] = min(res[b], res[a] + c)
    for i in range(1, n+1):
        print(res[i])