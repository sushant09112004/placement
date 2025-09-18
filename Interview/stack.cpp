#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct State {
    int idx;  // index of empty cell
    char num; // last tried number
};

bool isSafe(vector<vector<char>>& board, int row, int col, char c) {
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == c) return false; 
        if (board[i][col] == c) return false; 
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false; 
    }
    return true;
}

bool solveSudokuIterative(vector<vector<char>>& board) {
    vector<pair<int, int>> emptyCells;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == '.') {
                emptyCells.push_back({i, j});
            }
        }
    }

    stack<State> st;
    int idx = 0;

    while (idx < emptyCells.size()) {
        int row = emptyCells[idx].first;
        int col = emptyCells[idx].second;

        char start = '1';
        if (!st.empty() && st.top().idx == idx) {
            // Continue from last tried num + 1
            start = st.top().num + 1;
            board[row][col] = '.';
            st.pop();
        }

        bool placed = false;
        for (char c = start; c <= '9'; c++) {
            if (isSafe(board, row, col, c)) {
                board[row][col] = c;
                st.push({idx, c});
                idx++;
                placed = true;
                break;
            }
        }

        if (!placed) {
            // Backtrack
            if (st.empty()) return false;
            idx = st.top().idx; 
        }
    }
    return true;
}

void printBoard(const vector<vector<char>>& board) {
    for (auto& row : board) {
        for (auto& c : row) cout << c << " ";
        cout << endl;
    }
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

    if (solveSudokuIterative(board))
        printBoard(board);
    else
        cout << "No solution exists" << endl;

    return 0;
}
