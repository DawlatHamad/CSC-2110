#include "Square.h"

void Square::setLength(float l)
{
    length = l;   
}
float Square::getLength()
{
    return length;
}
float Square::getArea()
{
    return length * length;
}
Square::Square()
{
    setLength(0);
}

Square::Square(float l)
{
    setLength(l);
}