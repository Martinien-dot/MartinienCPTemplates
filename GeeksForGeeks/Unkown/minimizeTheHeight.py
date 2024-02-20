def getMinDiff(arr, n, k):
    # code here
    arr.sort()
    mx = arr[n-1]
    mn = arr[0]
    ans = arr[n-1] - arr[0]
    for i in range(1,n):
        if arr[i]<k or arr[n-1]<k:
            continue
        mn = min(arr[0]+k, arr[i]-k)
        mx = max(arr[n-1] - k, arr[i-1]+k)
        ans = min(ans, mx-mn)
    return abs(ans)

k, n = [int(i) for i in input().split()]
arr = [int(i) for i in input().split()]
print(getMinDiff(arr, n, k))