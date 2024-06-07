def solve():
    n = int(input())
    segments = [tuple(map(int, input().split())) for i in range(n)]
    res = 0
    lpre = [0]*n
    rpre = [0]*n
    lsuf = [0]*n
    rsuf = [0]*n
    lpre[0], rpre[0] = segments[0][0], segments[0][1]
    lsuf[n-1],rsuf[n-1] = segments[n-1][0], segments[n-1][1]
    for i in range(1, n):
        lpre[i] = max(lpre[i-1], segments[i][0])
        rpre[i] = min(rpre[i-1], segments[i][1])
        lsuf[n-i-1] = max(lsuf[n-i], segments[n-i-1][0])
        rsuf[n-1-i] = min(rsuf[n-i], segments[n-i-1][1])
    for i in range(n):
        if i==0:
            lm = lsuf[i+1]
            rm = rsuf[i+1]
        elif i==n-1:
            lm = lpre[i-1]
            rm = rpre[i-1]
        else:
            lm = max(lpre[i-1], lsuf[i+1])
            rm = min(rpre[i-1], rsuf[i+1])
        res = max(res, rm-lm)
    print(max(res,0))
def main():
    solve()

if __name__ == "__main__":
    main()
