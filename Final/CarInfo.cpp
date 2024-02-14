#include "CarInfo.h"

void CarInfo::setVIN(string v)
{
    vin = v;
}
string CarInfo::getVIN()
{
    return vin;
}
void CarInfo::setMake(string mk)
{
    make = mk;
}
string CarInfo::getMake()
{
    return make;   
}
void CarInfo::setModel(string md)
{
    model = md;
}
string CarInfo::getModel()
{
    return model;
}
void CarInfo::setYear(int y)
{
    year = y;
}
int CarInfo::getYear()
{
    return year;
}
void CarInfo::setPrice(float p)
{
    price = p;
}
float CarInfo::getPrice()
{
    return price;
}
void CarInfo::setCategory(string c)
{
    category = c;
}
string CarInfo::getCategory()
{
    return category;    
}
void CarInfo::printCarInfo()
{
    cout << vin << " " << make << " " << model << " " << year;
    cout << " $" << price << "k (" << category << ")" << endl;
}
CarInfo::CarInfo(string v, string mk, string md, int y, float p, string c)
{
    setVIN(v);
    setMake(mk);
    setModel(md);
    setYear(y);
    setPrice(p);
    setCategory(c);
}