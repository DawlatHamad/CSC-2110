#pragma once
#include "Employee.h"

class Manager: public Employee
{
    // Member
    private:
    	string department; 
    
    //Function
    public:
    	void setDepartment(string d);
    	string getDepartment();
    
    	// Constructors
    	Manager();
    	Manager(string n, string p, string a, float s, string d);
};