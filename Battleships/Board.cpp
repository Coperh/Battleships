#include "pch.h"
#include <iostream>


using namespace std;


Board::Board()
{
    // initialize board
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {
            board[j][i] = 0;
        }
    }
}
Board::~Board()
{
}


void Board:: printBoard() {
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
}

void Board:: placeBoat(int x, int y, int len, char dir) {

    int posX;
    int posY;
    // if x or y does not change 
    char posVar;
    switch (dir)
    {
    case 'n':
        posX = x;
        posY = y;
        posVar = 0;
        break;
    case 's':
        posX = x;
        posY = y - (len - 1);
        posVar = 0;
        break;
    case 'w':
        posX = x- (len-1);
        posY = y;
        posVar = 1;
        break;
    case 'e':
        posX = x;
        posY = y;
        posVar = 1;
        break;
    default:
        exit(0);
        break;
    }

    for (int i = 0; i < len; i++) {

        
        board[posX][posY] = 1;
       if (posVar > 0) {
           posX++;
       }
       else {
           posY++;
       } 
    }
}

void Board:: setState(int x, int y, int state) {
    board[x][y] = state;
}

void Board:: placeHit(int x, int y) {
    if (board[x][y] == 1) {
        setState(x, y, -1);
    }
    else {
        setState(x,y,2);
    }

}
