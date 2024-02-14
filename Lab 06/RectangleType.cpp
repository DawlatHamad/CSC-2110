#include "RectangleType.h"

int RectangleType::getX0()
{
    return p0.getX();
}
int RectangleType::getY0()
{
    return p0.getY();   
}
int RectangleType::getX1()
{
    return p1.getX();
}
int RectangleType::getY1()
{
    return p1.getY();
}
int RectangleType::getWidth()
{
    return abs(getY1() - getY0());
}
int RectangleType::getLength()
{
    return abs(getX1() - getX0());
}
int RectangleType::getPerimeter()
{
    return 2 * (getLength() + getWidth());
}
int RectangleType::getArea()
{
    return getWidth() * getLength();
}
RectangleType::RectangleType() 
{
    p0 = Point2D (0, 0);
    p1 = Point2D (0, 0);
}
RectangleType::RectangleType(int ax0, int ay0, int ax1, int ay1) 
{
    p0 = Point2D (ax0, ay0);
    p1 = Point2D (ax1, ay1);
}