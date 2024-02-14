#include "NewCar.h"

void NewCar::setWarranty(string w)
{
    warranty = w;   
}
string NewCar::getWarranty()
{
    return warranty;
}
void NewCar::printCarInfo()
{
    cout << vin << " " << make << " " << model << " " << year;
    cout << " $" << price << "k (" << category << ")";
    cout << " Covered By: " << warranty << endl;
}
NewCar::NewCar(string v, string mk, string md, int y, float p, string c, string w):CarInfo(v, mk, md, y, p, c)
{
    setWarranty(w);
}