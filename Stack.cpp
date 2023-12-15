//Source.cpp Source File For Main Function 
#include "Stack.h"
#include "ClassDefinitions.cpp"
#include <iostream>

using namespace std;

int main() {
	//Instance of Stack1 Created
	Stack1<int> a;
	//Variable Declaration
	int x;
	//Pop Variable to Stack Returns Empty Statement
	a.Pop(x);
	//Insert 2 onto Stack
	a.Push(2);
	//Insert 4 onto Stack
	a.Push(4); 
	cout << endl;
	//Detemine and Display Length of Stack
	cout << "Int Length 1 = " << a.length() << endl; 
	//Returns and Deletes Element at Top of Stack
	a.Pop(x);   
	//Display Returned Element
	cout << "Popped Value 1 = " << x << endl; 
	//Insert 3 onto Stack
	a.Push(3); 
	//Insert 4 onto Stack
	a.Push(4);
	//Insert 5 onto Stack
	a.Push(5); 
	//Insert 6 onto Stack
	a.Push(6); 
	//Check And Display If Stack is Full
	if (a.IsFull() == false)
		cout << "Stack is Not Full !" << endl;
	else
		cout << "Stack a is Full !" << endl;
	//Create Instance of Stack And Call Copy Constructor
	Stack1<int> b(a); 
	//Display Instance B Stack Information
	cout << "The Stack b Contains: " << endl;
	b.Print();
	//Return and Delete Top Element of Stack
	b.Pop(x); 
	//Display Stack B Information After Deletion 
	cout << "The Stack a At Location 2 Contains: " << endl;
	b.Print();
	//Display Stack A Information 
	cout << "The Stack a At Location 2 Contains: " << endl;
	a.Print();

	//Empty Stack A
	a.MakeEmpty(); 

	//Display Stack A After Empty
	cout << "The stack a at location 3 contains: " << endl;
	a.Print();

	return 0;
}
