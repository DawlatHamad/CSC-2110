#include <iostream>
#include "Circle.h"
#include "Square.h"
using namespace std;

int main()
{
    cout << "Circle and Square App!" << endl;
    cout << "----------------------" << endl;
    
    //
    cout << "~Circle~" << endl;
    Circle c1(3);
    cout << "Radius: " << c1.getRadius() << endl;
    cout << "Area: " << c1.getArea() << endl;
    
    //
    cout << "~Square~" << endl;
    Square s1(5);
    cout << "Length: " << s1.getLength() << endl;
    cout << "Area: " << s1.getArea() << endl;

    return 0;
}