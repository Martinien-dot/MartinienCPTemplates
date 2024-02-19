#include <bits/stdc++.h>
using namespace std;

// UNASSIGNED is used for empty
// cells in sudoku grid
#define UNASSIGNED 0

// N is used for the size of Sudoku grid.
// Size will be NxN

// This function finds an entry in grid
// that is still unassigned
bool FindUnassignedLocation(int grid[][],
							int& row, int& col);

// Checks whether it will be legal
// to assign num to the given row, col
bool isSafe(int grid[][], int row,
			int col, int num);

/* Takes a partially filled-in grid and attempts 
to assign values to all unassigned locations in 
such a way to meet the requirements for
Sudoku solution (non-duplication across rows,
columns, and boxes) */
bool SolveSudoku(int grid[][])
{
	int row, col;

	// If there is no unassigned location,
	// we are done
	if (!FindUnassignedLocation(grid, row, col))
		// success!
		return true;

	// Consider digits 1 to N
	for (int num = 1; num <= 16; num++) 
	{
		
		// Check if looks promising
		if (isSafe(grid, row, col, num)) 
		{
			
			// Make tentative assignment
			grid[row][col] = num;

			// Return, if success
			if (SolveSudoku(grid))
				return true;

			// Failure, unmake & try again
			grid[row][col] = UNASSIGNED;
		}
	}
	
	// This triggers backtracking
	return false;
}

/* Searches the grid to find an entry that is 
still unassigned. If found, the reference 
parameters row, col will be set the location 
that is unassigned, and true is returned. 
If no unassigned entries remain, false is returned. */
bool FindUnassignedLocation(int grid[][],
							int& row, int& col)
{
	for (row = 0; row < N; row++)
		for (col = 0; col < M; col++)
			if (grid[row][col] == UNASSIGNED)
				return true;
	return false;
}

/* Returns a boolean which indicates whether 
an assigned entry in the specified row matches
the given number. */
bool UsedInRow(int grid[][], int row, int num, int N)
{
	for (int col = 0; col < N; col++)
		if (grid[row][col] == num)
			return true;
	return false;
}

/* Returns a boolean which indicates whether 
an assigned entry in the specified column
matches the given number. */
bool UsedInCol(int grid[][], int col, int num, int M)
{
	for (int row = 0; row < M; row++)
		if (grid[row][col] == num)
			return true;
	return false;
}

/* Returns a boolean which indicates whether 
an assigned entry within the specified 3x3 box 
matches the given number. */
bool UsedInBox(int grid[][], int boxStartRow,
			int boxStartCol, int num, int A, int B)
{
	for (int row = 0; row < A; row++)
		for (int col = 0; col < B; col++)
			if (grid[row + boxStartRow]
					[col + boxStartCol] ==
									num)
				return true;
	return false;
}

/* Returns a boolean which indicates whether 
it will be legal to assign num to the given 
row, col location. */
bool isSafe(int grid[][], int row,
			int col, int num, int A, int B)
{
	/* Check if 'num' is not already placed in 
	current row, current column 
	and current AxB box */
	return !UsedInRow(grid, row, num)
		&& !UsedInCol(grid, col, num)
		&& !UsedInBox(grid, row - row % A,
						col - col % B, num)
		&& grid[row][col] == UNASSIGNED;
}

/* A utility function to print grid */
void printGrid(int grid[][], int N, int M)
{
	for (int row = 0; row < N; row++) 
	{
		for (int col = 0; col < M; col++)
			cout << grid[row][col] << " ";
		cout << endl;
	}
}

// Driver Code
int main()
{
	// 0 means unassigned cells
    int N, M;
    cin>>N>>M;
	int grid[][];
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			grid[i][j] = 0;
		}
	}
	if (SolveSudoku(grid) == true)
		printGrid(grid);
	else
		cout << "No solution exists";
	return 0;
}