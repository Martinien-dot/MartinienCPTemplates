t = int(input())
for _ in range(t):
    n, x, y = map(int, input().split())
    l = [int(i) for i in input().split()]
    res = 0
    mp = dict()
    for e in l:
        xx = e%x
        yy = e%y
        res+=mp.get(((x-xx)%x, yy), 0)
        mp[(xx, yy)] = mp.get((xx, yy), 0) + 1
    print(res)