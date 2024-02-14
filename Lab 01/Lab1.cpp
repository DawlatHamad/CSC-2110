// Lab 01 - Dawlat Hamad - GV5450
// Sources: I watched couple of vidoes on coding triangles, I forgot to save the links 

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctype.h>

using namespace std;

int main()
{
    //Declare Variable
    int size;

    //Header
    cout << endl;
    cout << "Triangle App!" << endl;
    cout << "-------------------" << endl;

    //Prompt user for triangle size
    cout << "Enter the size of the triangles [3,4,5,6,7]: ";
    cin >> size;
    cout << endl;

    //If user enters: 3 > size > 7; Prompt user to enter size agian
    while (size > 7 || size < 3)
    {
        cout << "Invalid input. Try agian.";
        cout << endl;
        cin.clear();
        cout << "Enter the size of the triangles [3,4,5,6,7]: ";
        cin >> size;
        cout << endl;
    }

    //Triangle Pattern 1 ◣
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    //Triangle Pattern 2 ◥
    for (int i = size; i >= 1; i--)
    {
        for (int k = size - i; k > 0; k--)
        {
            cout << "  ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;        
    }
    cout << endl;

    //Triangle Pattern 3 ◢
    for (int i = 1; i <= size; i++)
    {
        for (int k = size - i; k > 0; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;        
    }
    cout << endl;

    //Triangle Pattern 4 ◤
    for (int i = size; i >= 1; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;


    cout << endl;
}