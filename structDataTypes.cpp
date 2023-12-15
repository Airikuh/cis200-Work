//Program That Uses Template Struct With Different Data Types
#include <iostream>

using namespace std;

//Template and Definition For Struct
template <class T1, class T2>
struct Employeet {
	//Data Members
	T1 id;
	T2 salary;
};

int main() {
	//Declaration of Instance of Struct 
	Employeet<int, float> x;

	//Assign Values to the Data Members
	x.id = 101;
	x.salary = 30000.00;

	//Print to Screen
	cout << "Employee X Values: ID: " << x.id << " Salary: " << x.salary << endl;

	//Declaration of Instance of Struct 
	Employeet<short, double> y;

	//Assign Values to the Data Members
	y.id = 411;
	y.salary = 40000.00;

	//Print to Screen
	cout << "Employee Y Values: ID: " << y.id << " Salary: " << y.salary << endl;

	return 0;
}
