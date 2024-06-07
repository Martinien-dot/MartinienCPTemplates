

def solve():
        n, m = map(int, input().split())
        pos_a_row = {}
        pos_a_col = {}
        pos_b_row = {}
        pos_b_col = {}
        
        for i in range(n):
            ai = tuple(map(int, input().split()))
            for j in range(m):
                val = ai[j]
                pos_a_row[val] = i
                pos_a_col[val] = j
        
        for i in range(n):
            bi = tuple(map(int, input().split()))
            for j in range(m):
                val = int(bi[j])
                pos_b_row[val] = i
                pos_b_col[val] = j
        
        row_map = {}
        col_map = {}
        valid = True
        
        for val in range(1, n * m + 1):
            ra = pos_a_row[val]
            ca = pos_a_col[val]
            rb = pos_b_row[val]
            cb = pos_b_col[val]
            
            if ra not in row_map:
                row_map[ra] = rb
            elif row_map[ra] != rb:
                valid = False
                break
            
            if ca not in col_map:
                col_map[ca] = cb
            elif col_map[ca] != cb:
                valid = False
                break
        
        if valid:
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
