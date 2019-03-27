#include "Point.h"

Point Point::operator+(const Point& P)
{
    Point hasil(x,y);
    hasil.x += P.x;
    hasil.y += P.y;
    return hasil;
}

Point Point::operator-(const Point& P)
{
    Point hasil(x,y);
    hasil.x -= P.x;
    hasil.y -= P.y;
    return hasil;
}