#include<bits/stdc++.h>
using namespace std;

bool isSudoValid(vector<vector<int>> &sudo, int row, int column, int val){
    //check the row
    for(int i=0; i<9; i++){
        if(sudo[row][i]==val){
            return false;
        }
    }
    //check th3 column
    for(int i=0; i<9; i++){
        if(sudo[i][column]==val){
            return false;
        }
    }
    //check the 3x3 square
    int rstart = 3*(row/3);
    int cstart = 3*(column/3);
    for(int i=rstart; i<rstart+3; i++){
        for(int j=cstart; j<cstart+3; j++){
            if(sudo[i][j] == val){
                return false;
            }
        }
    }
    return true;
}

bool sudoSolver(vector<vector<int>>& sudo, int r, int c){
    if(c==9){
        if(r==8){
            return true;
        }
        c=0;
        r++;
    }
    if(sudo[r][c]!=0){
        return sudoSolver(sudo, r, c+1);
    }
    for(int v = 1; v<=9; v++){
        if(isSudoValid(sudo, r, c, v)){
            sudo[r][c] = v;
            if(sudoSolver(sudo, r, c+1))
                return true;
        }
        sudo[r][c] = 0;
    }
    return false;
}


void afficheVec1D(vector<int>vect){
    int taille = vect.size();
    for(int i=0; i<taille; i++){
        if(i==taille-1){
            cout<<vect[i];
        }
        else{
            cout<<vect[i]<<" ";
        }
    }
}
void afficheVec2D(vector<vector<int>>vect){
    for(vector<int>v:vect){
        afficheVec1D(v);
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> sudoku(9, vector<int>(9));
    for(int i=0; i<9; i++){
        for(int j =0; j<9; j++){
            cin>>sudoku[i][j];
        }
    }
    if(sudoSolver(sudoku, 0, 0))
        afficheVec2D(sudoku);
    else
        cout<<"None"<<endl;
}