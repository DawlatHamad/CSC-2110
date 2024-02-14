#pragma once
#include "Shape.h"

class Square : public Shape
{
    // Member
    private:
        float length;
    
    // Function
    public:
        void setLength(float l);
        float getLength();
        float getArea();
        
        // Constructor
        Square();
        Square(float l);
};