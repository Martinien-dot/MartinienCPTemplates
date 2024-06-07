#
#
#import math
#import sys
#
#def solve():
#    n = int(input())
#    a = list(map(int, input().split()))
#
#    l = [-float('inf')] * n
#    r = [float('inf')] * n
#
#    for i in range(1, n):
#        l[i] = math.gcd(a[i], a[i - 1])
#
#    for i in range(n - 2, -1, -1):
#        r[i] = math.gcd(a[i], a[i + 1])
#
#    l1 = [1] * n
#    r1 = [1] * n
#
#    for i in range(1, n):
#        l1[i] = l1[i - 1] and (l[i] >= l[i - 1])
#
#    for i in range(n - 2, -1, -1):
#        r1[i] = r1[i + 1] and (r[i] <= r[i + 1])
#
#    if l1[n - 2] or r1[1]:
#        print("YES")
#        return
#
#    for i in range(1, n - 1):
#        if (l1[i - 1] and r1[i + 1] and
#            math.gcd(a[i - 1], a[i + 1]) >= l[i - 1] and
#            math.gcd(a[i - 1], a[i + 1]) <= r[i + 1]):
#            print("YES")
#            return
#
#    print("NO")
#
#def main():
#    t = int(input().strip())
#    for _ in range(t):
#        solve()
#
#if __name__ == "__main__":
#    main()

from math import gcd
from typing import List

def good(b: List[int]) -> bool:
    g = gcd(b[0], b[1])
    for i in range(1, len(b) - 1):
        cur_gcd = gcd(b[i], b[i + 1])
        if g > cur_gcd:
            return False
        g = cur_gcd
    return True

def solve() -> bool:
    n = int(input())
    a = list(map(int, input().split()))
    
    g = -1
    to_del = -1
    for i in range(n - 1):
        cur_gcd = gcd(a[i], a[i + 1])
        if cur_gcd < g:
            to_del = i
            break
        g = cur_gcd
    
    if to_del == -1:
        return True
    
    b0 = a[:]
    b1 = a[:]
    b2 = a[:]
    
    if to_del > 0:
        b0.pop(to_del - 1)
    b1.pop(to_del)
    if to_del < n - 1:
        b2.pop(to_del + 1)
    
    return good(b0) or good(b1) or good(b2)

def main():
    t = int(input())
    for _ in range(t):
        print("YES" if solve() else "NO")

if __name__ == "__main__":
    main()
