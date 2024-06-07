n, m = map(int, input().split())

mn = 0
tp = 0
ar = []
for i in range(n):
    a, b = map(int, input().split())
    mn+=b
    tp+=a
    ar.append((a-b))
ar = sorted(ar)[::-1]
if mn>m:
    print(-1)
    exit(0)
res = 0
i  = 0
while tp>m:
    tp-=ar[i]
    res+=1
    i+=1
print(res)