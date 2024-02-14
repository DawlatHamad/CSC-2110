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

float Circle::getPerimeter()
{
    // Perimeter: dπ => 2πr
    return 2*PI*radius;
}

float Circle::getArea()
{
    // Area: πr^2
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