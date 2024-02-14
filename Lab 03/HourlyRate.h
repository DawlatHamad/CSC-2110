#pragma once
#include "Employee.h"

class HourlyRate: public Employee
{
    // Member
    private:
    	int rate;
    
    // Function
    public:
    	void setRate(int r);
    	int getRate();
    
    	// Constructors
    	HourlyRate();
    	HourlyRate(string n, string p, string a, float s, int r);
};