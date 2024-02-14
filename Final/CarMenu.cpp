#include "CarMenu.h"

void CarMenu::loadInventory()
{
    //(string v, string mk, string md, int y, float p, string c, string w)
    inventory.push_back(new NewCar("01", "Volvo", "113", 2023, 50, "New", "Endurance"));
    inventory.push_back(new NewCar("02", "Hyundai", "112", 2023, 55, "New", "ForeverCar"));
    inventory.push_back(new NewCar("03", "Chevrolet", "216", 2023, 60, "New", "Olive.com"));
    inventory.push_back(new NewCar("04", "BMW", "539", 2023, 45, "New", "CarShield"));
    inventory.push_back(new NewCar("05", "Volkswagen", "176", 2023, 50, "New", "Carchex"));
    //(string v, string mk, string md, int y, float p, string c, int m)
    inventory.push_back(new OldCar("06", "Ford", "301", 2001, 30, "Old", 150));
    inventory.push_back(new OldCar("07", "Toyota", "289", 2001, 45, "Old", 220));
    inventory.push_back(new OldCar("08", "Nissan", "207", 2001, 35, "Old", 165));
    inventory.push_back(new OldCar("09", "Honda", "151", 2001, 40, "Old", 200));
    inventory.push_back(new OldCar("10", "Dodge", "116", 2001, 45, "Old", 225));
}
void CarMenu::printInventory()
{
    cout << "Inventory" << endl;
    cout << "-----------------------------------------------------------" << endl;
    for (int i = 0; i < inventory.size(); i++) 
    {
        inventory[i] -> printCarInfo();
    }
}
void CarMenu::searchMake(string mk) // sequential search
{
    bool found = false;

    for (int i = 0; i < inventory.size(); i++) 
    {
        if (inventory[i] -> getMake() == mk) 
        {
            inventory[i] -> printCarInfo();
            found = true;
        }
    }

    if (!found) 
    {
        cout << "No cars found with make." << endl;
    }
    //inventory.clear();
}
void CarMenu::searchModel(string md) // sequential search
{
    bool found = false;

    for (int i = 0; i < inventory.size(); i++) 
    {
        if (inventory[i] -> getModel() == md) 
        {
            inventory[i] -> printCarInfo();
            found = true;
        }
    }

    if (!found) 
    {
        cout << "No cars found with model."<< endl;
    }
    //inventory.clear();
}
void CarMenu::searchCategory(string c) // sequential search
{
    bool found = false;

    for (int i = 0; i < inventory.size(); i++) 
    {
        if (inventory[i] -> getCategory() == c) 
        {
            inventory[i] -> printCarInfo();
            found = true;
        }
    }

    if (!found) 
    {
        cout << "No cars found in category." << endl;
    }
    //inventory.clear();
}
void CarMenu::sellCar(string mk) // vector::erase()
{
    for (int i = 0; i < inventory.size(); i++) 
    {
        if (inventory[i]->getMake() == mk) 
        {
            delete inventory[i];
            inventory.erase(inventory.begin() + i);
            cout << "Car deleted from inventory." << endl;
            return;
        }
    }
    cout << "Error: Car not found in inventory." << endl;
}
void CarMenu::addCar(CarInfo* carInfo)
{
    for (int i = 0; i < inventory.size(); i++) 
    {
        if (inventory[i] -> getMake() == carInfo -> getMake()) 
        {
            cout << "Error: Car already exists in inventory." << endl;
            return;
        }
    }
    inventory.push_back(carInfo);
    cout << "Car added to inventory." << endl;
}