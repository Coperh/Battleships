#include "pch.h"
#include <iostream>


using namespace std;



Board::Board()
{
    // initialize board
    for (int i = 0; i < sizeof(board) / sizeof(board[0]); i++) {

        for (int j = 0; j < sizeof(board[0]) / sizeof(board[0][0]); j++) {
            board[i][j] = 0;
        }
    }
}

void Board:: printBoard() {
    for (int i = 0; i < sizeof(board)/sizeof(board[0]); i++) {

        for (int j = 0; j < sizeof(board[0])/sizeof(board[0][0]); j++) {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}

Board::~Board()
{
    delete board;
}
