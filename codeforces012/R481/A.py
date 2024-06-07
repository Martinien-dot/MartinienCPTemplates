n = int(input())
arr  = list(map(int, input().split()))
res = []
for c  in arr:
    if c in res:
        res.remove(c)
        res.append(c)
    else:
        res.append(c)
print(len(res))
print(*res)