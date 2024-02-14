#include "LinkedList.h"

template<class Type>
int LinkedList<Type>::getCount()
{
	return count;
}

template<class Type>
void LinkedList<Type>::insertAtStart(Type data)
{
    // 1. create the new node
	nodeType <Type> *newNode = new nodeType <Type>();
	newNode->info = data;

    // 2. make the new node point to first 
    newNode->link = first;

    // 3. make first point to the new node 
	first = newNode;

    // 4. Increment the count  
	count++;

}

template<class Type>
LinkedList<Type>::LinkedList()
{
	count = 0;
	first = NULL; 
}

template<class Type>
void LinkedList<Type>::printList()
{
	// print all the nodes 
	nodeType<Type>* current = first;
	while (current != NULL)
	{
		cout << current->info << endl;
		current = current->link;
	}
}

template<class Type>
int LinkedList<Type>::countData(Type data)
{
	int count = 0;
	nodeType<Type>* current = first;
	while (current != NULL)
	{
		if (current->info == data)
			count++;
		current = current->link;

	}
	return count;
}

template<class Type>
void LinkedList<Type>::replaceData(Type originalData, Type newData)
{
    nodeType<Type>* current = first;
	while (current != NULL)
	{
    	if (current->info == originalData)
    	{
    	    current->info = newData;
    	}
    	current = current->link;
	}
}

template class LinkedList <int>;