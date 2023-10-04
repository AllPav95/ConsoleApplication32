#pragma once
#include "Point2D.h"

const int fieldWidth = 5;
const int fieldHeight = 5;  


class Field {
public:

    char cells[fieldHeight][fieldWidth];

    Point2D star;
    Point2D prize;

    Field(const Field& other);     
    Field();
    void drawField() const;
    void placeStar(int x, int y);
    void placePrize(int x, int y);
};