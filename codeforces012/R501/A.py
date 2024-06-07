n, m = map(int, input().split())
aide = [-1]*(m+1)
res = []
for i in range(n):
    u, v = map(int, input().split())
    for i in range(u, v+1):
        aide[i] = 0
for i in range(1,m+1):
    if aide[i]==-1:
        res.append(i)
print(len(res))
print(*res)