t = int(input())

for _ in range(t):
    def fct(n:int, m:int)->bool:
        if n<m:
            return False
        if n==m:
            return True
        if n%3!=0:
            return False
        if fct(n//3, m):
            return True
        if fct((n//3)*2, m):
            return True
        return False
    n, m = [int(i) for i in input().split()]
    if fct(n, m):
        print("YES")
    else:
        print("NO")