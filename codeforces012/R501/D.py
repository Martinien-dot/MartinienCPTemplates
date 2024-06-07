n,  k, s = map(int, input().split())
def step(curl, x):
    if curl-x>0:
        return curl-x
    else:
        return curl+x
curl = 1
if k>s or (k*(n-1)<s):print("NO")
else:
    print("YES")
    for i in range(k):
        l = min(n-1, s-(k-i-1))
        curl = step(curl, l)
        s-=l
        print(curl, end=' ')
