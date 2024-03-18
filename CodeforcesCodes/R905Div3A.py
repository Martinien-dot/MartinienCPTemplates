t = int(input())
for _ in range(t):
    s = input()
    a, b, c, d = [int(i) for i in s]
    res = 0
    if a==0:a=10
    if b==0:b=10
    if c==0:c=10
    if d==0:d=10
    res = abs(a) + abs(b-a)+1 + abs(c-b)+1 + abs(d-c)+1
    print(res)