#pragma once
#include <string>
using namespace std;

class Client
{
    // Members
    private:
        string username;
        float checkingBalance;
        float savingsBalance;
    
    // Function
    public:
        void setUsername(string u);
        string getUsername() const;
        void setCheckingBalance(float cb);
        float getCheckingBalance() const;
        void setSavingsBalance(float sb);
        float getSavingsBalance() const;
        
        // Constructors
        Client(); 
        Client(string u = "", float cb = 0, float sb = 0);
};