#include "Manager.h"

void Manager::setDepartment(string d)
{
    department = d; 
}

string Manager::getDepartment()
{
    return department;
}

Manager::Manager():Employee()
{
    setDepartment("Not Yet Set");

}

Manager::Manager(string n, string p, string a, float s, string d):Employee(n,p,a,s)
{
    setDepartment(d);
}