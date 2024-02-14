#pragma once
#include <iostream>
#include <string>
using namespace std;

class CarInfo
{
    // Members
    protected:
        string vin;
        string make;
        string model;
        int year;
        float price;
        string category;
    
    // Functions
    public:
        void setVIN(string v);
        string getVIN();
        void setMake(string mk);
        string getMake();
        void setModel(string md);
        string getModel();
        void setYear(int y);
        int getYear();
        void setPrice(float p);
        float getPrice();
        void setCategory(string c);
        string getCategory();
        void virtual printCarInfo();
        
        // Constructor
        CarInfo(string v, string mk, string md, int y, float p, string c);
};