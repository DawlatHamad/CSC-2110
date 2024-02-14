#pragma once
#include <iostream>
using namespace std;

class Square
{
    // Members
    private:
        float length;
    
    // Functions
    public:
        void setLength(float l);
        float getLength() const;
        float getArea() const;
        
        // Constructors
        Square(float l = 0);
        
        // Overload the + operator
        Square operator+(const Square& other) const;
        // Overload the * operator
        Square operator*(const Square& other) const;
        
};