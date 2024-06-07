import bisect

l = [1,5,9]
i = bisect.bisect_right(l,8)
l[i] = 8
print(i)
print(l)
print(24582*12204)