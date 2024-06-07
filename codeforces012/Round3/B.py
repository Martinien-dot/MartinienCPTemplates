def solve():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    st = set()
    res = 0
    dp = [0]*(m+1)
    for c in a:
        dp[c]+=1
        res+=(sum(dp)-dp[c])
    print(res)

if __name__ == "__main__":
    solve()