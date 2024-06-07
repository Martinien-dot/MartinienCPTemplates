
def solve(w, a):
    b = 0
    maxA = 0
    minA = 0
    for c in a:
        b+=c
        maxA = max(b, maxA)
        minA = min(b, minA)
    if maxA>w:
        return 0
    lf = -minA if minA<0 else minA
    rg = w-maxA if maxA>0 else w
    if lf>rg:
        return 0
    return rg-lf+1

# Lecture des entrées
n, w = map(int, input().split())
a = list(map(int, input().split()))

# Calcul et affichage du résultat
result = solve(w, a)
print(result)
