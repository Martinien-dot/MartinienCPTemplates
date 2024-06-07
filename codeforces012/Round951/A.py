def solve():
    n = int(input())
    a = list(map(int, input().split()))
    a2 = []
    for i in range(1, n):
        a2.append(max(a [i-1], a[i]))
    a2.sort()
    res = min(a2)-1
    print(res)

if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        solve()