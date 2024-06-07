
def solve():
    n, m, k = map(int, input().split())
    arr = list(map(int, input().split()))
    ob = arr[m-1]
    arr2 = sorted(arr)[::-1]
    a = False
    b = False
    for i in range(k):
        if arr2[i]==ob:
            a = True
            break
    for i in range(k,n):
        if arr2[i]==ob:
            b = True
            break
    if a and b:
        print("MAYBE")
    elif a and (not b):
        print("YES")
    else:
        print("NO")

def main():
    t = int(input())
    for _ in range(t):
       solve()

if __name__ == "__main__":
    main()