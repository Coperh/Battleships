#pragma once


#define BOARD_SIZE 10


class Board
{
public:
    Board();
    ~Board();
    void printBoard();
    void placeBoat(int x, int y, int len, char dir);
    void placeHit(int x, int y);
    
private:
    void setState(int x, int y, int state);
    static int const size = BOARD_SIZE;
    int board[size][size];
};
