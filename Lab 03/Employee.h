#pragma once
#include <string>
#include <iostream>
using namespace std;


class Employee
{
    // Members
    private: 
    	string name;
    	string position;
    	string address; 
    	float salary; 
    
    // Function
    public:
    	void setName(string n);
    	string getName();
    
    	void setPosition(string p);
    	string getPosition();
    
    	void setAddress(string a);
    	string getAddress();
    
    	void setSalary(float s);
    	float getSalary();
    
    	// Constructors 
    	Employee();
    	Employee(string n, string p, string a, float s); 

};
