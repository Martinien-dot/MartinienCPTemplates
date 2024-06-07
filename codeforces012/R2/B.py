from bisect import bisect_left, bisect_right
def solve():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    res = []
    a.sort()
    for c in b:
        i = bisect_right(a, c)
        res.append(i)
    print(*res)

if __name__ == "__main__":
    solve()