#include "Employee.h"

void Employee::setName(string n)
{
	name = n;
}

string Employee::getName()
{
	return name;
}

void Employee::setID(string i)
{
	id = i;
}

string Employee::getID()
{
	return id;
}

void Employee::setAddress(Address a)
{
	employeeAddress = a;
}

Address Employee::getAddress()
{
	return employeeAddress;
}

Employee::Employee()
{
	setName("not set yet");
	setID("not set yet");
	Address temp;
	setAddress(temp);
}

Employee::Employee(string n, string i, Address a)
{
	setName(n);
	setID(i);
	setAddress(a);

}