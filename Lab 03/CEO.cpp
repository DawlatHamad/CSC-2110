#include "CEO.h"

void CEO::setShares(int sh)
{
	shares = sh;
}

int CEO::getShares()
{
	return shares; 
}

CEO::CEO():Manager()
{
    setShares(1200);

}

CEO::CEO(string n, string p, string a, float s, string d, int sh):Manager(n,p,a,s,d)
{
    setShares(sh);
}