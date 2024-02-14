#include "Circle.h"
#define PI 3.141

void Circle::setRadius(float r)
{
    radius = r;
}
float Circle::getRadius()
{
    return radius;
}
float Circle::getArea()
{
    return  PI*radius*radius;
}
Circle::Circle()
{
    setRadius(0);
}

Circle::Circle(float r)
{
    setRadius(r);
}