from collections import defaultdict
n, m = map(int, input().split())
arr = tuple(map(int, input().split()))
graph = defaultdict(set)
res = [0] * n
for _ in range(m):
    a, b = map(int, input().split())
    a, b = (a-1, b-1)
    graph[a].add(b)
    graph[b].add(a)
aide = sorted((arr[i],i) for i in range(n))
ta = []
prec = aide[0][1]
mp = defaultdict(int)
processed = 0
for (val, ind) in aide:
    temp = processed - mp[val]
    for c in graph[ind]:
        if arr[c]<val:
            temp-=1
    res[ind] = temp
    processed+=1
    mp[val] += 1
print(*res)