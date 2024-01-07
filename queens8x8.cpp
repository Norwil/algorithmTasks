#include <iostream>
#include <vector>

using namespace std;

bool isSafe(const vector<int>& board, int row, int col) {
    for (int prevRow = 0; prevRow < row; ++prevRow) {
        if (board[prevRow] == col || abs(board[prevRow] - col) == abs(prevRow - row)) {
            return false;
        }
    }
    return true;
}

void printBoard(const vector<int>& board) {
    for (int row = 0; row < board.size(); ++row) {
        for (int col = 0; col < board.size(); ++col) {
            if (board[row] == col) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void solveNQueens(vector<int>& board, int row) {
    if (row == board.size()) {
        printBoard(board);
        return;
    }

    for (int col = 0; col < board.size(); ++col) {
        if (isSafe(board, row, col)) {
            board[row] = col;
            solveNQueens(board, row + 1);
            board[row] = -1;  // Backtrack
        }
    }
}

void nQueens(int n) {
    vector<int> board(n, -1);
    solveNQueens(board, 0);
}

int main() {
    int boardSize = 8; // Change this to the desired board size
    nQueens(boardSize);

    return 0;
}
