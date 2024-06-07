s, t, maxCost = input(), input(), int(input())
temp = []
n = len(s)
for i in range(len(s)):
    temp.append(abs(ord(s[i])-ord(t[i])))
res = 0
ps = [0 for _ in range(n+1)]
for i in range(1,n+1):
    ps[i] = ps[i-1]+temp[i-1]
for i in range(n):
    for j in range(i+1,n+1):
        tp = ps[j]-ps[i]
        if tp<=maxCost:
            res = max(res, tp)
print(temp)
print(ps)
print(res)