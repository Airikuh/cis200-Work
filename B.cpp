//Source.cpp File For Main Function
#include "B.h"

int main() {
	//Declaration Of Instance 
	B x;

	cout << "X: " << endl;

	//Print Method Call
	x.print();

	//Declaration Of Instance, Calls Parameterized Constructor
	B y(2, 3, 4);

	cout << endl;
	cout << "Y: " << endl;

	//Print Method Call
	y.print();

	//Declaration Of Instance, Calls Copy Constructor
	B z(y);

	cout << endl;
	cout << "Z Copied From Y: " << endl;

	//Print Method Call
	z.print();

	//Declaration Of Instance, Calls Copy Constructor
	B w = z;

	cout << endl;
	cout << "W: " << endl;

	//Print Method Call
	w.print();

	//Declaration Of Instance 
	B v;

	cout << endl;
	cout << "V: " << endl;

	//Print Method Call
	v.print();

	//Declaration Of Instance Calls = Operator Method
	v = w;

	cout << endl;
	cout << "V Copied From W: " << endl;
	
	//Print Method Call
	v.print();

	return 0;

}
