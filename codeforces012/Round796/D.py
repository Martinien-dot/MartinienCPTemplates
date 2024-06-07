def solve():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    ps = [0] + a
    for i in range(1,n+1):
        ps[i] += ps[i-1]
    if n<=k:
        res = ps[-1] + n*k - (n)*(n+1)//2
        print(res)
    else:
        aide = -1
        for i in range(k, n+1):
            aide = max(aide, ps[i]-ps[i-k])
        res =aide + (k)*(k-1)//2
        print(res)

if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        solve()