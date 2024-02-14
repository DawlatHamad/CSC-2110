#include <iostream>
#include "Square.h"
using namespace std;

int main()
{
    cout << "Overload Operator" << endl; 
    cout << "=======================" << endl;
    
    // 
    Square s1(7);
    Square s2(3);
    Square s3 = s1 + s2;
    Square s4 = s1 * s2;

    // Square One
    cout << "SQUARE ONE" << endl;
    cout << "Length: " << s1.getLength() << " ";
    cout << "Area: " << s1.getArea() << endl;
    cout << "-----------------------" << endl;
    
    // Square Two
    cout << "SQUARE TWO" << endl;
    cout << "Length: " << s2.getLength() << " ";
    cout << "Area: " << s2.getArea() << endl;
    cout << "-----------------------" << endl;
    
    // Operators
    cout << "OPERATORS" << endl;
    cout << "Operator +: " << s3.getLength() << endl;
    cout << "Operator *: " << s4.getLength() << endl;

    return 0;
}