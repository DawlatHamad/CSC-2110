#include <iostream>
#include "Employee.h"
int main()
{
    
	cout << "Address APP!" << endl;
    cout << "---------------" << endl;
	Address Caddress("Ford Rd.", "23223", "48126", "Dearborn", "USA");
	Employee CatherineObject("Catherine", "4424343", Caddress);
    cout << CatherineObject.getName() << endl;
    cout << CatherineObject.getID() << endl;
    cout << CatherineObject.getAddress().getStreetName() << endl;
    cout << CatherineObject.getAddress().getHouseNo() << endl;
    cout << CatherineObject.getAddress().getCity() << endl;
    cout << CatherineObject.getAddress().getCountry() << endl;
    
}