s = input()
s += "$"
n = len(s)

# Initial suffix array based on the single characters
suffix_array = sorted(range(n), key=lambda i: s[i])
rank = [0] * n
temp_rank = [0] * n

# Assign ranks to initial suffixes
for i in range(n):
    rank[suffix_array[i]] = ord(s[suffix_array[i]])


k = 1
while k < n:
    key = lambda i: (rank[i], rank[(i + k) % n])
    suffix_array.sort(key=key)

    # Recompute ranks
    temp_rank[suffix_array[0]] = 0
    for i in range(1, n):
        temp_rank[suffix_array[i]] = temp_rank[suffix_array[i - 1]]
        if key(suffix_array[i]) > key(suffix_array[i - 1]):
            temp_rank[suffix_array[i]] += 1
    rank, temp_rank = temp_rank, rank
    k *= 2

print(*suffix_array)
