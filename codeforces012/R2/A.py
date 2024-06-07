def solve():
    s = input().replace(';',',')
    l = s.split(',')
    a = []
    b = []
    for c in l:
        if c.isnumeric():
            if c=='0':
                a.append(c)
            elif c[0]!='0':
                a.append(c)
            else:
                b.append(c)
        else:
            b.append(c)
    if a:
        print('"'+','.join(a)+'"')
    else:
        print('-')
    if b:
        print('"'+','.join(b)+'"')
    else:
        print('-')


def main():
    solve()

if __name__ == "__main__":
    main()