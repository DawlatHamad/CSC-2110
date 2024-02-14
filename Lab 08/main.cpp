#include <iostream>
#include "Client.h"
using namespace std;

int main()
{
     // Declare Variables
    string username;
    float checkingBalance;
    float savingsBalance;
    
    cout << "Lab 08!" << endl;
    cout << "-------------------------" << endl;
    
    // Prompt User For Input
    cout << "Enter Client's Name: ";
    cin >> username;
    cout << "Enter Initial Checking Balance: ";
    cin >> checkingBalance;
    cout << "Enter Initial Savings Balance: ";
    cin >> savingsBalance;

    // Create Point One - Copy Inputs 
    Client *c1 = new Client("", 0, 0);
    c1->setUsername(username);
    c1->setCheckingBalance(checkingBalance);
    c1->setSavingsBalance(savingsBalance);

    // Create Point Two - Copy Point One
    Client *c2 = new Client("", 0, 0);
    c2 = c1;
    cout << "Client's Name: " << c2->getUsername() << endl;
    cout << "Checking Balance: " << c2->getCheckingBalance() << endl;
    cout << "Savings Balance: " << c2->getSavingsBalance() << endl;

    // Free memory
    delete c1;
    delete c2;
}
