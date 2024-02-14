#pragma once
#include "CarInfo.h"

class OldCar : public CarInfo
{
    // Members
    protected:
        int mileage;
    
    // Function    
    public:
        void setMileage(int m);
        int getMileage();
        void printCarInfo() override; // override
        
        // Constructor
        OldCar(string v, string mk, string md, int y, float p, string c, int m);
};