#include "Address.h"

void Address::setStreetName(string sn)
{
	streetName = sn; 
}

string Address::getStreetName()
{
	return streetName;
}

void Address::setHouseNo(string hn)
{
	houseNo = hn; 
}

string Address::getHouseNo()
{
	return houseNo;
}

void Address::setZipCode(string zc)
{
	zipCode = zc; 
}

string Address::getZipCode()
{
	return zipCode;
}

void Address::setCity(string c)
{
	city = c;
}

string Address::getCity()
{
	return city;
}\
void Address::setCountry(string c2)
{
	country = c2;
}
string Address::getCountry()
{
	return country;
}
Address::Address()
{
	setStreetName("not set yet");
	setHouseNo("not set yet");
	setZipCode("not set yet");
	setCity("not set yet");
	setCountry("not set yet");
	
}
Address::Address(string sn, string hn, string zc, string c, string c2)
{
	setStreetName(sn);
	setHouseNo(hn);
	setZipCode(zc);
	setCity(c);
	setCountry(c2);
}