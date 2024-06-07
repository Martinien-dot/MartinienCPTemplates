#n = int(input())
#s = list(input())
#t = list(input())
#if sorted(s)!=sorted(t):
#    print(-1)
#    exit(0)
#res = []
#while s!=t:
#    for i in range(n-1):
#        if s[i]!=t[i]:
#            s[i],s[i+1] = s[i+1],s[i]
#            res.append(i+1)
#print(len(res))
#print(*res)
n = int(input())
s = list(input().strip())
t = list(input().strip())

if sorted(s) != sorted(t):
    print(-1)
    exit(0)

res = []

for i in range(n):
    if s[i] != t[i]:
        # Trouver la position où l'élément t[i] se trouve dans s, à partir de la position i
        pos = i
        while s[pos] != t[i]:
            pos += 1
        
        # Amener l'élément trouvé à la position i en faisant des swaps adjacents
        for j in range(pos, i, -1):
            s[j], s[j-1] = s[j-1], s[j]
            res.append(j)

print(len(res))
print(*res)
