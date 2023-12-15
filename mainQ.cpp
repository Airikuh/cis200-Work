//Source.cpp Source File For Main Funcation 
#include "Header.h"
#include "Definitions.cpp"
#include <iostream>

using namespace std;

int main(){
	Queue2<float> a;
	float x;
	a.MakeEmpty();
	a.Dequeue(x);
	a.Enqueue(1.0);
	a.Enqueue(2.0);
	a.Enqueue(3.0);
	a.Enqueue(4.0);

	cout << "Int Length 1 = " << a.length() << endl;

	a.Dequeue(x);

	cout << "Int Length 2 = " << a.length() << endl;
	cout << "The Served Element = " << x << endl;
	cout << "Queue a Contains : " << endl;

	a.Print();

	if (a.IsFull() == false)
		cout << "Queue a is Not Full !" << endl;
	else
		cout << "Queue a is Full !" << endl;

	Queue2<float> b(a);

	cout << "Queue b Contains : " << endl;

	b.Print();

	b.Dequeue(x);

	cout << "Queue b at Location 2 Contains:  " << endl;

	b.Print();

	cout << "Queue a at Location 2 Contains:  " << endl;

	a.Print();

	return 0;
}

