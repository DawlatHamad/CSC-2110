#include "CSCdate.h"

void CSCDate::setDay(int d)
{
	if(d < 1 || d > 31) 
	{
	    day = 1;
	}
	else
	{
	    day = d;
	}
}

int CSCDate::getDay()
{
	return day;
}

void CSCDate::setMonth(int m)
{
    if(m < 1 || m > 12)
    {
	    month = 1;
    } 
	else
	{
	    month = m;
	}
}

int CSCDate::getMonth()
{
	return month;
}

void CSCDate::setYear(int y)
{
    if(y < 1800 || y > 2022)
    {
	    year = 1800;
    }
    else
    {
        year = y;
    }
}

int CSCDate::getYear()
{
	return year;
}

string CSCDate::getMonthName() 
{
    if (month == 1)
    {
        return "January";
    }
    else if (month == 2)
    {
        return "Febuary";
    }
    else if (month == 3)
    {
        return "March";
    }
    else if (month == 4)
    {
        return "April";
    }
    else if (month == 5)
    {
        return "May";
    }
    else if (month == 6)
    {
        return "June";
    }
    else if (month == 7)
    {
        return "July";
    }
    else if (month == 8)
    {
        return "August";
    }
    else if (month == 9)
    {
        return "September";
    }
    else if (month == 10)
    {
        return "October";
    }
    else if (month == 11)
    {
        return "November";
    }
    else if (month == 12)
    {
        return "December";
    }
    else
    {
        return "January";
    }
}

void CSCDate::printCSCDateInfo()
{
	cout << getDay() << "-" << getMonth() << "-" << getYear() << endl;

}

void CSCDate::printCSCDateInfo2()
{
	cout << getDay() << "-" << getMonthName() << "-" << getYear() << endl;

}


CSCDate::CSCDate()
{
    month = 1; //default month 
    day = 1; //default day 
    year = 1800; //default year 
}

CSCDate::CSCDate(int d, int m, int y)
{
	setDay(d);
	setMonth(m);
	setYear(y);
}