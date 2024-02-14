#pragma once
#include <iostream>
using namespace std;

class Circle
{
    // Members
    private:
        float radius;
        
    // Function
    public:
        void setRadius(float r);
        float getRadius();
        float getPerimeter();
        float getArea();
        
        // Constructors
        Circle();
        Circle(float r);
};