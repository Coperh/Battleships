// Battleships.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{   
    
    Board board1;
    board1.placeBoat(0, 0, 3, 'n');
    board1.placeBoat(0, 9, 4, 'e');
    board1.placeBoat(9, 9, 5, 's');
    board1.placeBoat(9, 0, 6, 'w');
    board1.placeHit(9, 9);
    board1.placeHit(5, 5);
    board1.printBoard();

}

