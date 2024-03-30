t = int(input())

for _ in range(t):
    res = ""
    for i in range(8):
        s = list(input())
        for j in range(8):
            if s[j]!='.':
                res+=s[j]
    print(res)