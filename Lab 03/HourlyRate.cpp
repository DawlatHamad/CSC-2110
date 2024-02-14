#include "HourlyRate.h"

void HourlyRate::setRate(int r)
{
    rate = r; 
}

int HourlyRate::getRate()
{
    return rate;
}

HourlyRate::HourlyRate():Employee()
{
    setRate(0);

}

HourlyRate::HourlyRate(string n, string p, string a, float s, int r):Employee(n,p,a,s)
{
    setRate(r);
}