def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b=list(map(int, input().split()))
    m = int(input())
    d = list(map(int, input().split()))
    conditionDernierElementDeDDansB = False
    distincts = []
    for i in range(n):
        if b[i]==d[-1]:
            conditionDernierElementDeDDansB = True
        if a[i]!=b[i]:
            distincts.append(b[i])
    distincts.sort()
    d.sort()
    k = len(distincts)
    i = 0
    j = 0
    while i<k and j<m:
        if distincts[i]==d[j]:
            i+=1
            j+=1
        elif distincts[i]<d[j]:
            break
        else:
            j+=1
    if i==k and conditionDernierElementDeDDansB:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()


