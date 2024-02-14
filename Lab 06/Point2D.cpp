#include "Point2D.h"

void Point2D::setX(int x)
{
    this->x = x;
}
int Point2D::getX()
{
    return x;
}
void Point2D::setY(int y)
{
    this->y = y; 
}
int Point2D::getY()
{
    return y;
}
Point2D::Point2D()
{
    setX(0);
    setY(0);
}
Point2D::Point2D(int ax, int ay) 
{
    setX(ax);
    setY(ay);
}