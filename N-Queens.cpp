#include <iostream>
using namespace std;

const int MAX = 10; 
int board[MAX][MAX]; 

void printSolution(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j]) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(int row, int col, int N) {
    for (int i = 0; i < col; i++) {
        if (board[row][i]) {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }
    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j]) {
            return false;
        }
    }
    return true;
}

bool solveNQUtil(int col, int N) {
    if (col >= N) {
        return true;
    }
    for (int i = 0; i < N; i++) {
        if (isSafe(i, col, N)) {
            board[i][col] = 1;
            if (solveNQUtil(col + 1, N)) {
                return true;
            }
            board[i][col] = 0; // Backtrack
        }
    }
    return false;
}

void solveNQ(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }
    if (!solveNQUtil(0, N)) {
        cout << "Solution does not exist" << endl;
    } else {
        printSolution(N);
    }
}

int main() {
    int N;
    cout << "Enter the size of the chessboard: ";
    cin >> N;
    if (N > MAX) {
        cout << "Size exceeds maximum limit of " << MAX << endl;
        return 1;
    }
    solveNQ(N);
    return 0;
}
