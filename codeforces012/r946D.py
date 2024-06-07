
def solve():
    n = int(input())
    s = input()
    x, y = 0, 0
    inv = {
        'E':'W',
        'N':'S',
        'S':'N',
        'W':'E'
    }
    for c in s:
        if c == 'E':
            y+=1
        if c == 'N':
            x+=1
        if c == 'S':
            x-=1
        if c == 'W':
            y-=1
    if x%2==1 or y%2==1:
        print("NO")
        return
    res = ['R']*n
    if x==y==0:
        if n==2:
            print('NO')
            return
        res[0] = res[s.find(inv[s[0]])] = 'H'
    else:
        for i in range(n):
            if s[i]=='E' and y>0:
                y-=2
                res[i]='H'
            if s[i]=='W' and y<0:
                y+=2
                res[i] = 'H'
            if s[i]=='N' and x>0:
                res[i]='H'
                x-=2
            if s[i]=='S' and x<0:
                res[i] = 'H'
                x+=2
    print(''.join(res))

def main():
    t = int(input())
    for _ in range(t):
       solve()

if __name__ == "__main__":
    main()