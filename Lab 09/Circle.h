#pragma once
#include "Shape.h"

class Circle : public Shape
{
    // Members
    private:
        float radius;
    
    // Functions
    public:
        void setRadius(float r);
        float getRadius();
        float getArea();
        
        // Constructor
        Circle();
        Circle(float r);
};