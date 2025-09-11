#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<char>>& board, int row, int col, char c) {
    // for vertical check 
    for(int  i = 0 ; i < 9 ; i++){
        if (board[row][i] == c){
            return false;
        }
    }
    
    // for horizonatl 
    for (int i = 0 ; i < 9 ; i++){
        if (board[i][col] == c){
            return false;
        }
    }
    
    // for the grid application 
    int scrow = (row/3) * 3;
    int scol = (col / 3)  * 3 ;
    for (int i = scrow ; i < scrow + 3 ; i++){
        for (int j =scol ; j < scol + 3 ; j++){
            if (board[i][j] == c){
                return false ;
            }
        }
    }
    
   
    return true;
}
bool solveSudoku(vector<vector<char>>& board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if (board[i][j] == '.') {
                for (char c = '1'; c <= '9'; c++) { 
                    if (isSafe(board, i, j, c)) {
                        board[i][j] = c; 
                        if (solveSudoku(board)) return true; 
                        else board[i][j] = '.'; 
                    }
                }
                return false; 
            }
        }
    }
    return true; 
}
int main() {
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
   if (solveSudoku(board)) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
 else {
        cout << "No solution exists" << endl;
    }
    return 0;
}

