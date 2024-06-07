def solve():
    s = input()
    mp = {}
    if len(s)==1:
        print(s)
        return
    for c in s:
        mp[c] = mp.get(c,0)+1
    aide = [c for c in mp if mp[c]%2==1]
    aide.sort()
    while len(aide)>1:
        mp[aide[-1]]-=1
        mp[aide[0]]+=1
        if mp[aide[-1]]%2==0:
            aide.pop()
        if mp[aide[0]]%2==0:
            aide.pop(0)
    res = ''
    for c in sorted(mp):
        if c in mp:
            res+=c*(mp[c]//2)
    tr = ''
    for c in mp:
        if mp[c]%2==1:
            tr=c
            break
    print(res+tr+res[::-1])


if __name__ == "__main__":
    solve()

