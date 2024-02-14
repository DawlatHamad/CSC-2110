#pragma once

#include <string>
#include <iostream>
using namespace std; 

class CSCDate
{ 
    // members 
    private: 
    	int day; 
    	int month;
    	int year;
    
    // functions 
    public: 
    	// set day 
    	void setDay(int d); 
    	// get day
    	int getDay();
    
    	// set Month
    	void setMonth(int m); 
    	// get Month
    	int getMonth();
    	
    	// get MonthName
    	string getMonthName();
    
    	// set Year 
    	void setYear(int y);
    	// get Year 
    	int getYear();
    
        // Print Date with Month Number
    	void printCSCDateInfo();
    	// Print Data with Month Name
    	void printCSCDateInfo2();
    
    	// Constructors 
    	CSCDate();// default constructor 
    	CSCDate(int d, int m, int y);// overloaded constructor 
};