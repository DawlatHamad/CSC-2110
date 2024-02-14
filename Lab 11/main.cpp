#include <iostream>
using namespace std;

int Power(int x, int y)
{
    // Base Case
    if(y == 0)
    {
        return 1;
    }
    // General Case
    else
    {
        return Power(x, y - 1) * x;
    }
}

int main()
{
    // Decalre Variables
    int x;
    int y;
    // Prompt for Input
    cout << "Enter the base number: ";
    cin >> x;
    cout << "Enter the power number: ";
    cin >> y;
    // Print Output
    cout << "Solution: " << Power(x,y);

    return 0;
}