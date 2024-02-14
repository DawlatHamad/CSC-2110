#pragma once
#include <iostream>
using namespace std;

class Point2D
{
    // Members
    private:
        int x;
        int y;
    
    // Function
    public:
        void setX(int x);
        int getX();
        
        void setY(int y);
        int getY();
        
        // Constructors
        Point2D();
        Point2D(int ax, int ay);
};