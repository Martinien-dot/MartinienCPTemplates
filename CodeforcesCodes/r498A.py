n = int(input())
arr = list(map(int, input().split()))
for i in range(n):
    if arr[i]%2==1:
        arr[i]+=1
for i in range(n):
    if arr[i]%2==0:
        arr[i]-=1
print(*arr)