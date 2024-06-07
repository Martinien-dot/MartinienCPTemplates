n = int(input())
a = list(map(int, input().split()))
b = [0]+[c*2 for c in a]
res = -1
temp = 1
for i in range(1,n):
    if a[i]<=b[i]:
        temp+=1
        res = max(temp, res)
    else:
        temp=1
print(max(res,1))