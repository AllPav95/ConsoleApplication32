#pragma once
#include "Field.h"
#include <iostream>

Field::Field()
{
}
Field::Field(const Field& other) {
    star.x = other.star.x;
    star.y = other.star.y;

    prize.x = other.prize.x;
    prize.y = other.prize.y;

    for (int i = 0; i < fieldHeight; ++i) {
        for (int j = 0; j < fieldWidth; ++j) {
            cells[i][j] = other.cells[i][j];
        }
    }
}
void Field::drawField() const
{
    for (int i = 0; i < fieldHeight; ++i) {
        for (int j = 0; j < fieldWidth; ++j) {
            char symbol = (star.x == j && star.y == i) ? '*' : '-';
            if (prize.x == j && prize.y == i) {
                symbol = 'P';
            }
            std::cout << symbol << '-';
        }
        std::cout << std::endl;
    }
}

void Field::placeStar(int x, int y)
{
    
    if (x >= 0 && x < fieldWidth && y >= 0 && y < fieldHeight) {
        
        star.x = x;
        star.y = y;
    }
}

void Field::placePrize(int x, int y)
{
   
    if (x >= 0 && x < fieldWidth && y >= 0 && y < fieldHeight) {
       
        prize.x = x;
        prize.y = y;
    }
}