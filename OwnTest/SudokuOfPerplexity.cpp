#include<bits/stdc++.h>

using namespace std;

const int N = 10; // Taille du sudoku
const int K = 3; // Taille d'un bloc

// Fonction pour afficher le sudoku
void printSudoku(vector<vector<int>>& sudoku) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << sudoku[i][j] << " ";
            if ((j + 1) % K == 0 && j != N - 1) cout << "| ";
        }
        cout << endl;
        if ((i + 1) % K == 0 && i != N - 1) cout << string(25, '-') << endl;
    }
}

// Fonction pour vérifier si une valeur est valide dans une case donnée
bool isValid(vector<vector<int>>& sudoku, int row, int col, int val) {
    // Vérifier la ligne et la colonne
    for (int i = 0; i < N; i++) {
        if (sudoku[row][i] == val || sudoku[i][col] == val) return false;
    }
    // Vérifier le bloc
    int rowStart = (row / K) * K;
    int colStart = (col / K) * K;
    for (int i = rowStart; i < rowStart + K; i++) {
        for (int j = colStart; j < colStart + K; j++) {
            if (sudoku[i][j] == val) return false;
        }
    }
    return true;
}

// Fonction pour résoudre le sudoku
bool solveSudoku(vector<vector<int>>& sudoku, int row, int col) {
    // Si on a atteint la fin du sudoku, on a trouvé une solution
    if (row == N) return true;
    // Si on a atteint la fin de la ligne, on passe à la ligne suivante
    if (col == N) return solveSudoku(sudoku, row + 1, 0);
    // Si la case est déjà remplie, on passe à la case suivante
    if (sudoku[row][col] != 0) return solveSudoku(sudoku, row, col + 1);
    // On essaie toutes les valeurs possibles pour la case
    for (int val = 1; val <= N; val++) {
        if (isValid(sudoku, row, col, val)) {
            sudoku[row][col] = val;
            if (solveSudoku(sudoku, row, col + 1)) return true;
            sudoku[row][col] = 0;
        }
    }
    // Si aucune valeur ne fonctionne, on retourne false
    return false;
}

int main() {
    // Initialiser le sudoku
    vector<vector<int>> sudoku(N, vector<int>(N, 0));
    // Lire le sudoku depuis l'entrée standard
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> sudoku[i][j];
        }
    }
    // Résoudre le sudoku
    if (solveSudoku(sudoku, 0, 0)) {
        // Afficher la solution
        printSudoku(sudoku);
    } else {
        cout << "Pas de solution" << endl;
    }
    return 0;
}
