#pragma once

class Point2D {
public:
    int x;
    int y;

    Point2D();
    Point2D(int xVal, int yVal);
    Point2D(const Point2D& other);
};