

import bisect
n, m = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
q = list(map(int, input().split()))
dp = [0]*(n+1)
for i in range(1,n+1):
    dp[i] = dp[i-1] + a[i-1]
for c in q:
   i = bisect.bisect_left(dp, c)
   print(i, c-dp[i-1])