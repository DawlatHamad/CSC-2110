#include "OldCar.h"

void OldCar::setMileage(int m)
{
    mileage = m;   
}
int OldCar::getMileage()
{
    return mileage;
}
void OldCar::printCarInfo()
{
    cout << vin << " " << make << " " << model << " " << year;
    cout << " $" << price << "k (" << category << ")";
    cout << " Mileage: " << mileage << endl;
}
OldCar::OldCar(string v, string mk, string md, int y, float p, string c, int m):CarInfo(v, mk, md, y, p, c)
{
    setMileage(m);
}