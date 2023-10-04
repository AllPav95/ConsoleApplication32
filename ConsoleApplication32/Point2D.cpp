#include "Point2D.h"

Point2D::Point2D() : x(0), y(0) {}

Point2D::Point2D(int xVal, int yVal) : x(xVal), y(yVal) {}

Point2D::Point2D(const Point2D& other) : x(other.x), y(other.y) {}