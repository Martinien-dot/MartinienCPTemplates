

def solve():
    n = int(input())
    arr = [int(i) for i in input().split()]
    res = 0
    cnt = dict()
    for i in range(n-2):
        temp = (arr[i], arr[i+1], arr[i+2])
        aide = [0]*3
        aide[0] = (0, arr[i+1], arr[i+2])
        aide[1] = (arr[i], 0, arr[i+2])
        aide[2] = (arr[i], arr[i+1], 0)
        for c in aide:
            res+=cnt.get(c,0) - cnt.get(temp,0)
            cnt[c] = cnt.get(c,0)+1
        cnt[temp] = cnt.get(temp, 0) + 1
    print(res)

def main():
    t = int(input())
    for _ in range(t):
       solve()

if __name__ == "__main__":
    main()