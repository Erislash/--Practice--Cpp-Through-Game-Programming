// Tic-Tac-Toe Board
// Demonstrates multidimensional arrays
#include <iostream>

using namespace std;

int main(){
    const int ROWS = 3;
    const int COLS = 3;
    char board[ROWS][COLS] = {{'O', 'X', 'O'},
                                                {'@', 'O', 'O'},
                                                {'O', 'X', 'X'}};

    cout << "Here's the tic-tac-toe board:\n";
    for (int i = 0; i < ROWS; ++i){
        for (int j = 0; j < COLS; ++j){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n\n";
    }
    cout << "===============================\n\n";
    cout << "X moves to the (0, 1) position\n";
    board[1][0] = 'X';
    for (int i = 0; i < ROWS; ++i){
        for (int j = 0; j < COLS; ++j){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n\n";
    }

    return 0;
}