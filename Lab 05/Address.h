#pragma once
#include <string>
using namespace std; 
class Address
{
    // Member
    private: 
    	string streetName;
    	string houseNo;
    	string zipCode;
    	string city;
    	string country;
    	
    // Function
    public:
    	void setStreetName(string sn);
    	string getStreetName();
    
    	void setHouseNo(string hn);
    	string getHouseNo();
    
    	void setZipCode(string zc);
    	string getZipCode();
    
    	void setCity(string c);
    	string getCity();
    	
    	void setCountry(string c2);
    	string getCountry();
    	
    	// Constructors
    	Address();
    	Address(string sn, string hn, string zc, string c, string c2);

};