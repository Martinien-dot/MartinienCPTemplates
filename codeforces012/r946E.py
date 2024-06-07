



def solve():
    m, sal = [int(i) for i in input().split()]
    target = sal*(m-1)
    cs = []
    hs = []
    for i in range(m):
        c, h = [int(i) for i in input().split()]
        cs.append(c)
        hs.append(h)
    tot = sum(hs)
    dp = [0] + [float('inf')]*tot
    for i in range(m):
        for j in  range(tot, hs[i]-1,-1):
            if dp[j-hs[i]]+cs[i]<=i*sal:
                dp[j] = min(dp[j], dp[j-hs[i]]+cs[i])
    for i in range(tot, -1, -1):
        if dp[i]!=float('inf'):
            print(i)
            break
def main():
    t = int(input())
    for _ in range(t):
       solve()

if __name__ == "__main__":
    main()