


def longest_prefix_suffix(s):
    n = len(s)
    lps = [0] * n  # LPS array to store the longest prefix suffix values for the pattern

    # Length of the previous longest prefix suffix
    length = 0

    # LPS[0] is always 0, so we start from index 1
    i = 1
    while i < n:
        if s[i] == s[length]:
            length += 1
            lps[i] = length
            i += 1
        else:
            if length != 0:
                # We do not increment i here
                length = lps[length - 1]
            else:
                lps[i] = 0
                i += 1

    # lps[n-1] contains the length of the longest prefix which is also suffix
    return lps[-1]

n, m = map(int, input().split())
s = input()
i = longest_prefix_suffix(s)
rep = s
print(s[:i]+s[i:]*m)