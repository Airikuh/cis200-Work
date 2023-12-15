//Source.cpp File for Operator Overloading
#include "Header.h"

using namespace std;

int main() {
	A a, b, c, d, e, f;

	a += b;

	cout << "Position 1" << endl;

	a.print();
	b.print();

	cout << (a == b) << endl;

	a = ++d;

	b = e++;

	cout << "Position 2" << endl;

	a.print();
	b.print();

	f = d + e;

	cout << endl;
	cout << "Position 3" << endl;

	f.print();
	   	  
	return 0; 
}
