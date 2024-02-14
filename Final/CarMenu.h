#pragma once
#include <vector>
#include "NewCar.h"
#include "OldCar.h"
using namespace std;

class CarMenu
{
    // Member
    private:
        vector<CarInfo*> inventory;
    
    // Function 
    public:
        void loadInventory();
        void printInventory();
        void searchMake(string mk);
        void searchModel(string md);
        void searchCategory(string c);
        void sellCar(string mk);
        void addCar(CarInfo* carInfo);
};