//Stack.h Header File For Stack Class
#pragma once


template<class ItemType>
class Stack1 {
	//Private Attributes
	//Pointer to Dynamic Array
	ItemType* info;
	//Variable For Top of Stack
	int top;

//Public Methods
public:
	//Default Constructor
	Stack1();
	//Copy Constructor With Deep Copy
	Stack1(const Stack1<ItemType>& x);
	//Empty Stack
	void MakeEmpty(); 
	//Test Stack To Determine If Empty
	bool IsEmpty();
	//Test Stack To Determine If Full
	bool IsFull();
	//Return The Number of Elements in The Stack
	int length();
	//Print Elements in Stack
	void Print();
	//Insert Element Into Top of Stack If Not Full
	void Push(ItemType x);
	//Delete And Return Element From Top of Stack If Not Empty
	void Pop(ItemType& x);
	//Destructor to Deallocate Memory in Dynamic Array
	~Stack1();

};

//ClassDefinitions.cpp Source File For Stack Class Definitions
#include "Stack.h"
#include <iostream>

using namespace std;

//Default Constructor That Creates Stack With Dynamic Array
template<class ItemType>
Stack1<ItemType>::Stack1() {
	//Length of Array
		int MAXITEM = 5;

		//Memory Allocation For Dynamic Array
		info = new ItemType[MAXITEM];

		//Top of Stack Empty
		top = -1;
}

//Copy Constructor With Deep Copy
template<class ItemType>
Stack1<ItemType>::Stack1(const Stack1<ItemType>& x) {
	//Length of Array
	int MAXITEM = 5;

	//Copy Content At Top of Stack to Object
	top = x.top;

	//Allocate Memory For Dynamic Array
	info = new ItemType[MAXITEM];

	//For Loop to Cycle Through Array And Copy Content to Object
	for (int i = 0; i <= top; i++) {
		info[i] = x.info[i];
	}

}

//Method to Empty Stack 
template<class ItemType>
void Stack1<ItemType>::MakeEmpty() {
	//Empty By Setting Top of Stack To Index -1 Before Valid Array Element
	//Indicating Stack is Empty
	top = -1;
}

//Test if Stack is Empty
template<class ItemType>
bool Stack1<ItemType>::IsEmpty() {
	//Top Equal to -1 Stack is Empty and is True, Else Stack is Not Empty and is  False
	return top == -1;
}

//Method to Test if Stack is Full
template<class ItemType>
bool Stack1<ItemType>::IsFull() {

	//Length of Array
	int MAXITEM = 5;

	//If Top of Stack is Equal to Length of Array Returns True For Full
	//Else Returns False Indicating There is Still Room in The Stack
	return (top == MAXITEM -1);
}

//Method to Return Number of Elements in Stack
template<class ItemType>
int Stack1<ItemType>::length() {
	//Returns Number of Elements By Returning Top of Stack's Location In Array
	return top + 1;
}

//Method to Print Elements in Stack to Screen
template<class ItemType>
void Stack1<ItemType>::Print() {

	//If Statement To Print To Screen If Stack is Empty
	if (IsEmpty()) {
		cout << "The Stack is Empty!";
		//Return Back To Main Or Calling Routine After Message Printed
		return;
	}

	//For Loop To Print Stack's Elements to Screen In Succession From Top To Bottom
	for (int i = top; i >= 0; i--) {
		//Display Element Information
		cout << info[i] << " "; 
		//Move to Next Line
		cout << endl;
	}
}

//Method to Insert Item on Stack
template<class ItemType>
void Stack1<ItemType>::Push(ItemType x) {
	//If Statement To Print To Screen If Precondition is Not Met
	if (IsFull()) {
		cout << "The Stack is Full And Do Nothing.";
		//Return to Main Function Or Calling Routine As Stack is Already Full 
		//And Cannot Add Another Item at This Time
		return;
	}
	//If Precondition Met Add Element to Top of Stack
	info[++top] = x;
}

//Method to Delete Top Element of Stack if Not Empty
template<class ItemType>
void Stack1<ItemType>::Pop(ItemType& x) {
	//If Statement to Print To Screen If Precondition is Not Met
	if (IsEmpty()) {
		cout << "The Stack is Empty And Do Nothing.";
		//Return To Main Function Or Calling Routine As Stack is Already Empty
		//And Cannot Delete An Item At This Time
		return;
	}
	//If Precondition Met Pass By Reference Element Back to Calling Routine
	x = info[top];

	//Decrement Top of Stack By One To Make Next Element Top of Stack
	top--;
}

//Destructor to Deallocate Dynamic Array
template<class ItemType>
Stack1<ItemType>::~Stack1() {
	//Deallocates Array
	delete[] info;
}
