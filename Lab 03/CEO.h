#pragma once
#include "Manager.h"

class CEO: public Manager
{
    // Member
    private:
        int shares;
    
    // Function
    public:
        void setShares(int sh);
        int getShares();
    
    	// Constructors
    	CEO();
    	CEO(string n, string p, string a, float s, string d, int sh);
};
