#include "Circle.h"

class Cylinder:public Circle
{
    // Members
    private:
        float height;
        
    // Functions
    public:
        void setHeight(float h);
        float getHeight();
        float getArea();
        float getVolume();
        
        // Constructors
        Cylinder();
        Cylinder(float r = 0, float h = 0);
};