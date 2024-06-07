def solve():
    n = int(input())
    m = int(input())
    a = [int(input()) for _ in range(n)]
    a.sort()
    te = 0
    i = n-1
    res=0
    while te<m:
        te+=a[i]
        i-=1
        res+=1
    print(res)

if __name__ == "__main__":
    solve()