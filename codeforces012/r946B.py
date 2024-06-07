t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    l = sorted(set(s))
    mp = {l[i]:l[~i] for i in range(len(l))}
    res=''.join(mp[c] for c in s)
    print(res)