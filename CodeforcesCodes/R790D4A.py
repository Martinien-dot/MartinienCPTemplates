t = int(input())

for _ in range(t):
    s = input()
    res1 = 0
    res2 = 0
    for i in s[:3]:
        res1+=int(i)
    for i in s[-3:]:
        res2+=int(i)
    if res1==res2:
        print("YES")
    else:
        print("NO")