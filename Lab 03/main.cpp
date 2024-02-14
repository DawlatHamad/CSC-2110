#include <iostream>
#include "CEO.h"
#include "HourlyRate.h"
using namespace std;

int main()
{
   

    Employee e1;

    e1.setName("Jason");

    Manager m1;

    m1.setDepartment("QA");

    std::cout << m1.getName();

    Manager m2("Mary", "Sr. Manager", "2222 Joy Rd", 3000, "QA"); 
   
}