
from bisect import bisect_left, bisect_right
N = 200 * 1000 + 13
LOGN = 11

n, k = 0, 0
a = [0] * N
len = [0] * N
rems = [[] for _ in range(LOGN)]
pw = [0] * LOGN

def main():
    global n, k
    n, k = map(int, input().split())
    a[:n] = map(int, input().split())
    
    pw[0] = 1
    for i in range(LOGN - 1):
        pw[i + 1] = (pw[i] * 10) % k
    
    for i in range(n):
        x = a[i]
        while x > 0:
            len[i] += 1
            x //= 10
        rems[len[i]].append(a[i] % k)
    
    for i in range(LOGN):
        rems[i].sort()
    
    ans = 0
    for i in range(n):
        for j in range(1, LOGN):
            rem = (a[i] * pw[j]) % k
            xrem = (k - rem) % k
            l = bisect_left(rems[j], xrem)
            r = bisect_right(rems[j], xrem)
            ans += r - l
            if len[i] == j and (rem + a[i] % k) % k == 0:
                ans -= 1
    
    print(ans)

if __name__ == "__main__":
    main()