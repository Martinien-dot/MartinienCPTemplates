t = int(input())

for _ in range(t):
    n = int(input())
    ca = input()
    l = sorted(input().split(), key=lambda x:(x[1], x[0]))
    orig = []
    autre = []
    for c in l:
        if c[1]==ca:
            if not c in orig:
                orig.append(c)
        else:
            if not c in autre:
                autre.append(c)
    aide = []
    if len(orig)>=2:
        for i in range(len(orig)-1):
            for j in range(i+1, len(orig)):
                aide.append([orig[i], orig[j]])
    if len(autre)>=2:
        for i in range(len(autre)-1):
            for j in range(i+1, len(autre)):
                if autre[j][1]==autre[i][1]:
                    aide.append([autre[i], autre[j]])
    if autre and orig:
        for c in autre:
            for d in orig:
                aide.append([c, d])
    
    res = []
    vu = []
    #print(aide)
    for fofo in aide[::-1]:
        if (not fofo[0] in vu) and (not fofo[1] in vu):
            vu.append(fofo[0])
            vu.append(fofo[1])
            res.append(fofo)
    if len(res)>=n:
        for i in range(n):
            print(res[i][0], res[i][1])
    else:print("IMPOSSIBLE")