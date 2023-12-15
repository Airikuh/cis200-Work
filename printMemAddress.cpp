//Program That Prints Out the Beginning Memory Address of Each Variable
#include <iostream>

using namespace std;

//Function Definition for Add Function
int add(int x, int y) {
	return (x + y);
}

int main() {
	//Variable Declarations
	int a = 10;
	float b = 3.14;
	char c = 'j';
	char d[80];

	//Print Statments to Print Memory Addresses
	cout << "Memory Address of a: " << &a << endl;
	cout << "Memory Address of b: " << &b << endl;
	cout << "Memory Address of c: " << static_cast<void*>(&c) << endl;
	cout << "Memory Address of d: " << &d << endl;
	cout << "Memory Address of Function x + y: " << &add << endl;

	return 0;
}
