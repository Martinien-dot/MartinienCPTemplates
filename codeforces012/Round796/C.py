def solve():
    n = int(input())
    a = [0]*26
    for i in range(2*n + 1):
        s = input()
        for c in s:
            a[ord(c) - ord('a')] += 1
    for i in range(26):
        if a[i] % 2 != 0:
            print(chr(i+ord('a')))
            break

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()