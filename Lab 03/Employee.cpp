#include "Employee.h"

void Employee::setName(string n)
{
	name = n; 
}

string Employee::getName()
{
	return name;
}

void Employee::setPosition(string p)
{
	position = p;
}

string Employee::getPosition()
{
	return position; 
}

void Employee::setAddress(string a)
{
	address = a;
}

string Employee::getAddress()
{
	return address;
}

void Employee::setSalary(float s)
{
	salary = s; 
}

float Employee::getSalary()
{
	return salary;
}

Employee::Employee()
{
	name = "Not Set";
	position = "Not Assigned";
	address = "Not Set";
	salary = 2000; 
}

Employee::Employee(string n, string p, string a, float s)
{
	setName(n);
	setPosition(p);
	setAddress(a);
	setSalary(s);
}