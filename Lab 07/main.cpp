#include <iostream>
using namespace std;

int main()
{
    // Declare Variables
    int length;
    int sum = 0;
    
    // Prompt User for Array Lenght
    cout << "Enter the array's length: ";
    cin >> length;
    cout << "============================" << endl;
    
    // Dynamic Array 
    int* dynamicArray = new int[length];
    //int* arrayPtr = dynamicArray;
       
    for (int i = 0; i < length; i++)
    {
        cout << "Enter array member: ";
        cin >> dynamicArray[i];
    }
    cout << "============================" << endl;
    
    // Sum of array
    for (int i = 0; i < length; i++)
    {
        sum+=dynamicArray[i];
    }
    cout << "Sum of array members: " << sum << endl;
    cout << "============================"<< endl;
    
   // Clean Up 
   delete[] dynamicArray;
}

