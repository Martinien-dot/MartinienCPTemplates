t = int(input())
for _ in range(t):
    n = int(input())
    l = []
    for i in range(n):
        s = input().count('1')
        if s!=0:
            l.append(s)
    if len(l)==1:
        print("SQUARE")
    else:
        print("TRIANGLE")