#pragma once


#define BOARD_SIZE 10


class Board
{
public:
    void printBoard();
    Board();
    ~Board();
private:
    int board[BOARD_SIZE][BOARD_SIZE];
};
