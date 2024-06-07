import math
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    z = math.lcm(*a)
    tp = sum(z/c for c in a)
    print(*[z//c for c in a] if tp<z else [-1])
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        solve()