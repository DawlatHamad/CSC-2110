#include "Client.h"

void Client::setUsername(string u)
{
    username = u;
}
string Client::getUsername() const
{
    return username;   
}
void Client::setCheckingBalance(float cb)
{
    if(cb < 0)
    {
        checkingBalance = 0;
    }
    else
    {
        checkingBalance = cb;
    }
}
float Client::getCheckingBalance() const
{
    return checkingBalance;
}
void Client::setSavingsBalance(float sb)
{
    if(sb < 0)
    {
        savingsBalance = 0;
    }
    else
    {
        savingsBalance = sb;
    }
}
float Client::getSavingsBalance() const
{
    return savingsBalance;
}
Client::Client()
{
    setUsername("Not Set Yet");
    setCheckingBalance(0);
    setSavingsBalance(0);
}
Client::Client(string u, float cb, float sb)
{
    setUsername(u);
    setCheckingBalance(cb);
    setSavingsBalance(sb);
}