def solve():
    n = int(input())
    a = list(map(int, input().split()))
    sm = sum(a)
    a.sort()
    if sm%n!=0:
        nb1 = sm//n
        nb2 = (sm+n)//n
        p1 = sm%n
        temp=[nb1]*(n-p1)+[nb2]*(p1)
        res = 0
        for i in range(n):
            res+=abs(temp[i]-a[i])
        print(res//2)
    else:
        nb = sm//n
        res = 0
        for i in range(n):
            res+=abs(a[i]-nb)
        print(res//2)

if __name__ == "__main__":
    solve()