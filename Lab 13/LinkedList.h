#pragma once
#include <iostream>
using namespace std; 

template <class Type>
struct nodeType
{
	Type info; 
	nodeType<Type>* link;
};

template <class Type>
class LinkedList
{
    private: 
    	nodeType<Type>* first; 
    	int count=0; 
    
    public:
    	int getCount();
    
    	void insertAtStart(Type data); 
    
    	void printList();
    
    	int countData(Type data); 
    
    	void replaceData(Type originalData, Type newData); 
    	
    	LinkedList();
};