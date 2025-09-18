#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    set<string> seen;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            char number = board[i][j];
            if (number != '.') {
                string rowKey = "row" + to_string(i) + "-" + number;
                string colKey = "col" + to_string(j) + "-" + number;
                string boxKey = "box" + to_string(i / 3) + to_string(j / 3) + "-" + number;

                if (seen.count(rowKey) || seen.count(colKey) || seen.count(boxKey)) {
                    return false;
                }

                seen.insert(rowKey);
                seen.insert(colKey);
                seen.insert(boxKey);
            }
        }
    }
    return true;
}

int main(){
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '3', '6', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    if (isValidSudoku(board)) {
        cout << "The Sudoku board is valid." << endl;
    } else {
        cout << "The Sudoku board is not valid." << endl;
    }

    return 0;
}