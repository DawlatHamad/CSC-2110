#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    cout << "LinkedList" << endl;

    //Create the List
    LinkedList<int> ls1; 
    ls1.insertAtStart(6);
    ls1.insertAtStart(5);
    ls1.insertAtStart(2);
    ls1.insertAtStart(7);
    ls1.insertAtStart(6);
    ls1.insertAtStart(3);
    ls1.insertAtStart(2);
    
    //Replace the List
    ls1.replaceData(6, 8); 

    //Print the List
    ls1.printList();
}