
n, k = map(int, input().split())
ar = [int(i) for i in input().split()]
mp = {}
for i in range(n):
    if ar[i] in mp:
        mp[ar[i]]+=[i]
    else:
        mp[ar[i]] = [i]
temp = sorted(ar)[-k:]
temp2 = []
for c in temp:
    temp2.append(mp[c][-1]+1)
    mp[c].pop()
temp2.append(0)
temp2.sort()

temp3 = [(temp2[i]-temp2[i-1]) for i in range(1, len(temp2))]
temp3[-1]+=(n-temp2[-1])
print(sum(temp))
print(*temp3)