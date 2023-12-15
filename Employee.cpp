//Source.cpp Source File for Main Function
#include "Employee.h"
#include <fstream>
#include <ostream>

using namespace std;



int main() {
	//Instances of Class Declaration
	Employee a, b, c, d;
	//Variable and File Declarations
	ofstream file;
	int age;
	int id;
	float salary;


	//Set Information for Instances 
	a.setAge(40);
	b.setAge(41);
	c.setAge(42);

	a.setId(111);
	b.setId(112);
	c.setId(113);

	a.setSalary(30000);
	b.setSalary(31000);
	c.setSalary(32000);

	//Copy Constructor Call to Copy Content From a to e
	Employee e(a);

	//Print a and e Information to Show They Are the Same After Use of 
	//Copy Constructor
	cout << "Employee Information for a: ";
	a.Print();

	cout << "Employee Information for e: ";
	e.Print();

	//= Operator to Assign Content of b to d
	d = b;

	//Print b and d Information to Show They Are the Same After Use of
	//= Operator 
	cout << "Employee Information for b: ";
	b.Print();

	cout << "Employee Information for d: ";
	d.Print();


	//Create and Explicit File Open for Output File
	file.open("output.txt");
	//Check to Make Sure File Opened, or Else Show Display Message
	if (!file) {
		cout << "File Cannot be Opened For Reading." << endl;
		exit(1);
	}

	//Get All Method Call to Write Information of b and d Into File
	b.getAll(age, id, salary);
	file << "b is " << age << " years old, ID: " << id << ", with Salary:$" << salary << endl;

	d.getAll(age, id, salary);
	file << "d is " << age << " years old, ID: " << id << ", with Salary:$" << salary << endl;

	system("pause");

	return 0;

}
