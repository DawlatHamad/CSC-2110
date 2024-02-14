#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    // Declare Variables
    vector <int> arr = {1,4,2,7,8,4,5,2,3,7,4,2,9,3,6,7,8};
    int num; 
    int count = 0;
    
    // Prompt user for input
    cout << "Please enter a number: ";
    cin >> num;
    
    // Count Instance
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    
    // Print output
    cout << "The number " << num;
    cout << " shows " << count;
    cout << " times in the vector." << endl;
}
