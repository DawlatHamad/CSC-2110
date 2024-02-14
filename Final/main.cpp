#include <iostream>
#include <vector>
#include "NewCar.h"
#include "OldCar.h"
#include "CarMenu.h"
using namespace std;

int main()
{
    cout << "Welcome to Dawlat's Dealership!" << endl;

    // Declare Variables
    CarMenu carMenu;
    int choice = 0;
    int search = 0;
    int add = 0;
    string vin;
    string make;
    string model;
    int year;
    float price;
    string category;
    string warranty;
    int mileage; 
    
    // Print the Menu till prompted to stop
    while(choice != 5)
    {
        // Menu Choices
        cout << "===========================================================" << endl;
        cout << "1. Load Catalog" << endl;
        cout << "2. Search Inventory" << endl;
        cout << "3. Sell Cars" << endl;
        cout << "4. Add Cars to Inventory" << endl;
        cout << "5. Exit" << endl;
        cout << "What can I do for you today? ";
        cin >> choice;
        cout << "-----------------------------------------------------------" << endl;

    
        // Next Screen
        if (choice == 1) // Load
        {
            carMenu.loadInventory();
            carMenu.printInventory();
            cout << endl;
        }
        else if (choice == 2) // Search
        {
                // Search Choices
                cout << "1. Search by make" << endl;
                cout << "2. Search by model" << endl;
                cout << "3. Search by category" << endl;
                cout << "4. Exit" << endl;
                cout << "-----------------------------------------------------------" << endl;
                // Prompt for search typede
                cout << "How would you like to search? ";
                cin >> search;
                cout << "-----------------------------------------------------------" << endl;
                
                if (search == 1)
                {
                    cout << "Make: ";
                    cin.ignore();
                    cin >> make;
                    carMenu.searchMake(make);
                }
                else if (search == 2)
                {
                    cout << "Model: ";
                    cin.ignore();
                    cin >> model;
                    carMenu.searchModel(model);
                }
                else if (search == 3)
                {
                    cout << "Category: ";
                    cin.ignore();
                    cin >> category;
                    carMenu.searchCategory(category);
                }
                else if (search == 4)
                {
                    return 0;
                }
                else
                {
                    cout << "Not a Search option" << endl;
                }            
        }
        else if (choice == 3) // Sell
        {
            cout << "Sell : ";
            cin.ignore();
            cin >> make;
            carMenu.loadInventory();
            carMenu.sellCar(make);

        }
        else if (choice == 4) // Add
        {
            // Search Choices
                cout << "1. Add New Car" << endl;
                cout << "2. Add Old Car" << endl;
                cout << "3. Exit" << endl;
                cout << "-----------------------------------------------------------" << endl;
                // Prompt for search typede
                cout << "What do you want to add? ";
                cin >> add;
                cout << "-----------------------------------------------------------" << endl;
                
                if (add == 1)
                {
                    cout << "Enter VIN: ";
                    cin.ignore();
                    cin >> vin;
                    cout << "Enter Make: ";
                    cin >> make;
                    cout << "Enter Model: ";
                    cin >> model;
                    cout << "Enter Year: ";
                    cin >> year;
                    cout << "Enter Price: ";
                    cin >> price;
                    cout << "Enter Warranty: ";
                    cin >> warranty;
                    carMenu.addCar(new NewCar(vin, make, model, year, price, "New", warranty));
                }
                else if (add == 2)
                {
                    cout << "Enter VIN: ";
                    cin.ignore();
                    cin >> vin;
                    cout << "Enter Make: ";
                    cin >> make;
                    cout << "Enter Model: ";
                    cin >> model;
                    cout << "Enter Year: ";
                    cin >> year;
                    cout << "Enter Price: ";
                    cin >> price;
                    cout << "Enter Mileage: ";
                    cin >> warranty;
                    carMenu.addCar(new OldCar(vin, make, model, year, price, "Old", mileage));
                }
                else
                {
                    cout << "Invalid choice." << endl;
                }
        }
        else if (choice == 5)
        {
            return 0;
        }
        else
        {
            cout << "Not an Option." << endl;
        }
    }
    return 0;
}