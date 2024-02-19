    def print_board(board):
        count = 0
        for row in board:
            for el in row:
                if el == 1:
                    count += 1
        # Not a valid solution
        if count != len(board):
            return
 
        # Print the matrix
        for row in board:
            for el in row:
                print(el, end=" ")
            print()
 
    def validate(board, i, j):
        # Validate rows
        for c in range(j):
            if board[i] == 1:
                return False
 
        # Validate columns
        for r in range(i):
            if board[r][j] == 1:
                return False
 
        # Validate diagonals to right up corner
        r, c = i, j
        while c >= 0 and r >= 0:
            if board[r] == 1:
                return False
            r -= 1
            c -= 1
 
        # Validate diagonals to left up corner
        r, c = i, j
        while c < len(board) and r >= 0:
            if board[r] == 1:
                return False
            r -= 1
            c += 1
 
        return True
 
    def n_queen(n):
        solutions = []  # Store all valid solutions
        board = [[0] * n for _ in range(n)]
 
        stack = []  # Stack to simulate recursive calls
        row, col = 0, 0
 
        while True:
            # Try to place a queen in the current row
            while col < n:
                if validate(board, row, col):
                    board[row][col] = 1
                    stack.append((row, col))
                    col = 0
                    break
                col += 1
            else:
                if not stack:  # No valid placement found and no backtrack is possible
                    break
                row, col = stack.pop()
                board[row][col] = 0
                col += 1
                continue
 
            if row == n - 1:
                # A valid solution is found
                solution = [row[:] for row in board]
                solutions.append(solution)
                board[row][col] = 0
                col += 1
                continue
 
            row += 1
 
        for solution in solutions:
            print_board(solution)
            print()
    n_queen(4)