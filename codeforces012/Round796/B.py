import math
import heapq
import sys
sys.setrecursionlimit=1000
from bisect import bisect_left, bisect_right

def mindiv2(x):
    if x%2==1:
        return 0
    return 1 + mindiv2(x//2)

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    mnd2 = float('inf')
    i = 0
    nbp = 0
    for j in range(n):
        if mnd2>mindiv2(a[j]):
            mnd2 = mindiv2(a[j])
            i = j
        if a[j]%2==0:
            nbp+=1
    res = nbp+mnd2
    if a[i]%2==0:
        res-=1
    print(res)


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        solve()