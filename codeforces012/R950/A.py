from collections import defaultdict
def solve():
    n, m = map(int, input().split())
    s = input()
    mp = defaultdict(int)
    for c in s:
        mp[c] += 1
    res = 0
    for c in "ABCDEFG":
        res+=max(0, m-mp[c])
    print(res)

def main():
    t = int(input())
    for _ in range(t):
       solve()

if __name__ == "__main__":
    main()