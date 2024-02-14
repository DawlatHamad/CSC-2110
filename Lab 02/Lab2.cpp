#include <iostream>
#include "CSCdate.h"
using namespace std;

int main ()
{
    cout << "CSCdate app!" << endl;
    cout << "______________________________" << endl;
    
    //First Output
    cout << "First CSCdate: ";
    CSCDate dt1;
    dt1.printCSCDateInfo();
    
    //Second Output
    cout << "Updated first CSCdate: ";
    CSCDate dt2(21, 4, 2005);
    dt2.printCSCDateInfo();

    //Third Output
    cout << "Second CSCdate: ";
    CSCDate dt3(18, 6, 2021);
    dt3.printCSCDateInfo2();
}