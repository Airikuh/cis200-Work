//Q.h Header File For Struct NodeType and Class Queue
#pragma once
#include <iostream>

using namespace std;

//Global Definition to Hold a Maximum Size For Queue
#define MAX_SIZE 5

//Struct NodeType Must Be Defined Before Class That Uses it
template <class ItemType>
struct NodeType {
	ItemType info;
	NodeType* next;
};


template<class ItemType>
class Queue2{
	//Private Pointer to Front and Rear of Queue Attributes
	NodeType<ItemType>* front; 
	NodeType<ItemType>* rear; 

//Public Methods
public:
	//Default Constructor
	Queue2();
	//Copy Constructor For Deep Copy
	Queue2(const Queue2<ItemType>& x);
	//Empty Queue And Deallocate All Nodes in Linked List
	void MakeEmpty();
	//Check to Detemine if Queue is Empty
	bool IsEmpty();
	//Check to Detemine if Queue is Full
	bool IsFull();
	//Return Number of Items in Queue
	int length();
	//Print Value of All Elements in Queue
	void Print();
	//Insert Element Into Queue if Queue Not Full
	void Enqueue(ItemType x);
	//Delete and Return Element From Front of Queue if Queue Not Empty
	void Dequeue(ItemType& x);
	//Destructor to Dellocate Memory Used in Dynamic Array
	~Queue2();

};
