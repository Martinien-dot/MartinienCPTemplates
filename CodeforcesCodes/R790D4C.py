t = int(input())

for _ in range(t):
    n, m = [int(i) for i in input().split()]
    l = []
    res = 10000000
    for i in range(n):
      l.append(input())
    for i in range(n-1):
       for j in range(i+1,n):
          dif = sum([abs(ord(l[i][k])-ord(l[j][k])) for k in range(m)])
          res = min(res, dif)
    print(res)