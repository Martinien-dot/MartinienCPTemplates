n = int(input())
s = input()
nx = 0
res = 0
for c in s:
    if c=='x':
        nx+=1
        if nx>2:
            res+=1
    else:
        nx=0
print(res)