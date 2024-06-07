
def solve():
    x, y =  map(int, input().split())
    res = 1
    while x%2==y%2:
        res*=2
        x//=2
        y//=2
    print(res)

if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        solve()