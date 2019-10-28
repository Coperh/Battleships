// Battleships.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
    Board board1;
    board1.placeBoat(0, 0, 3, 'n');
    board1.placeBoat(0, 9, 3, 'e');
    board1.placeBoat(9, 9, 3, 's');
    board1.placeBoat(9, 0, 3, 'w');
    board1.printBoard();

    std::cin;
}

