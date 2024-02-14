#include "Cylinder.h"
#define PI 3.141

void Cylinder::setHeight(float h)
{
    height = h;
}
float Cylinder::getHeight()
{
    return height;
}
float Cylinder::getArea() 
{
    return (2*Circle::getArea()) + (Circle::getPerimeter()*height);
}
float Cylinder::getVolume() 
{
    return Circle::getArea()*height;
}
Cylinder::Cylinder()
{
    setRadius(0);
    setHeight(0);
}
Cylinder::Cylinder(float r, float h)
{
    setRadius(r);
    setHeight(h);
}