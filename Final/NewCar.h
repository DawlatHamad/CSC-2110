#pragma once
#include "CarInfo.h"

class NewCar : public CarInfo
{
    // Members
    protected:
        string warranty;
    
    // Function    
    public:
        void setWarranty(string w);
        string getWarranty();
        void printCarInfo() override; // override
        
        // Constructor
        NewCar(string v, string mk, string md, int y, float p, string c, string w);
};