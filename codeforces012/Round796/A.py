import math
import heapq
from bisect import bisect_left, bisect_right
def low_bit(x):
    return x & -x

def ispowerof2(x):
    while x%2==0:
        x//=2
    if x==1:
        return True
    return False

def solve():
    x = int(input())
    y = low_bit(x)
    while x==y or (x&y)==0:y+=1
    print(y)


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        solve()