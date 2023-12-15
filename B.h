//B.h File For Class B Definition
#pragma once
#include <iostream>

using namespace std;

class B {
	//Private Attributes
	int a, b, c;

//Public Methods
public:
	//Deafult Constructor
	B() { a = 0; b = 0; c = 0; }

	//Parameterized Constructor
	B(int x, int y, int z) { a = x; b = y; c = z; }

	//Copy Constructor
	B(const B& x) { a = x.a; b = x.b; c = x.c; }

	//Operator Constructor 
	B& operator = (B& x) { a = x.a; b = x.b; c = x.c; return *this; }

	//Print Method
	void print() {
		cout << "The Values are: " << a << "  " << b << "  " << c << "  ";
	}



};
