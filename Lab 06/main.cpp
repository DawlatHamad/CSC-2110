#include <iostream>
#include "RectangleType.h"
using namespace std;

int main()
{
    // Declare Variables
    int x0;
    int y0;
    int x1;
    int y1;
    
    // Prompt and Print Output
    cout << "Rectangle App!" << endl;
    cout << "-----------------" << endl;
    cout << "Enter x0 and y0: ";
    cin >> x0;
    cin >> y0;
    cout << endl;
    cout << "Enter x1 and y1: ";
    cin >> x1;
    cin >> y1;
    cout << endl;
    

    // Objects
    //Point2D p0(x0, y0);
	//Point2D p1(x1, y1);
	RectangleType Rt1(x0, y0, x1, y1); 
    
    // Print Rectangle Information
    cout << "Rectangle Information: " << endl;
    cout << "Width: " << Rt1.getWidth() << endl;
    cout << "Length: " << Rt1.getLength() << endl;
    cout << "Perimeter: " << Rt1.getPerimeter() << endl;
    cout << "Area: " << Rt1.getArea() << endl;

    
    return 0;
}