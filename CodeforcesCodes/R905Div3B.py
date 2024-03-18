t = int(input())
for _ in range(t):
    n, m = [int(i) for i in input().split()]
    s = input()
    l = set()
    np = 0
    ni = 0
    for c in s:
        if c in l:
            np+=1
            ni-=1
            l.remove(c)
        else:
            ni+=1
            l.add(c)
    if m>=ni-1:
        print("YES")
    else:print("NO")