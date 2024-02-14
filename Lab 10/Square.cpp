#include "Square.h"

void Square::setLength(float l)
{
    length = l;
}
float Square::getLength() const
{
    return length;
}
float Square::getArea() const
{
    return length * length;   
}
Square::Square(float l)
{
    setLength(l);
}
Square Square::operator+(const Square& other) const
{
    // formula for operator sum: s1.length + s2.length 
    return Square(length + other.length);
}
Square Square::operator*(const Square& other) const
{
    // formula for operator average: (s1.length + s2.length) / 2
    return Square((length + other.length) / 2);
}