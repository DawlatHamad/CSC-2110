#include <iostream>
#include "Cylinder.h"
using namespace std;

int main()
{
    
    float radius;
    float height;
    
    cout << "Cylinder App!" << endl;
    cout << "------------------------" << endl;
    cout << "Enter Radius: ";
    cin >> radius;
    
    while (radius < 0)
    {
        cout << "Invalid Radius";
        cout << endl;
        cin.clear();
        cout << "Enter Radius Agian: ";
        cin >> radius;
    }
    
    cout << "Enter Height: ";
    cin >> height;
    
    Circle c(radius);
    Cylinder h(radius, height);
    cout << "Cylinder Area: " << h.getArea() << endl;
    cout << "Cylinder Volume: " << h.getVolume() << endl;
    cout << endl;

    return 0;
}