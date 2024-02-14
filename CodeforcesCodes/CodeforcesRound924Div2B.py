t = int(input())
for _ in range(t):
    n = int(input())
    l = list(set([int(i) for i in input().split()]))
    l.sort()
    taille = len(l)
    i = 0
    ans = 0
    for j in range(taille):
        while l[j] - l[i]>=n:
            i+=1
        ans = max(ans, j-i+1)
    print(ans)