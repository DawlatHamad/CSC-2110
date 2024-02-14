#pragma once
#include <cstdlib>
#include "Point2D.h"

class RectangleType
{
    // Members
    private:
        Point2D p0;
        Point2D p1;
        
    // Function
    public:
        int getX0();
        int getY0(); 
        int getX1(); 
        int getY1(); 
        int getWidth(); 
        int getLength(); 
        int getPerimeter(); 
        int getArea();
        
        // Constructors
        RectangleType();
        RectangleType(int ax0, int ay0, int ax1, int ay1);
};