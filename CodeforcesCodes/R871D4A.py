t = int(input())
for _ in range(t):
    l = "codeforces"
    s = input()
    res = 0
    for i in range(10):
        if s[i]!=l[i]:
            res+=1
    print(res)