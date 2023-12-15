//Program That Takes Two Inputs From User, Calls Recursive Function, and Displays Total
#include <iostream>

//Declaration of Static Variable to Count Recursion
static int counter;

using namespace std;

//Function Prototype
int foo(int, int);


int main() {
	//Variable Declaration
	int x, y;

	//Get User Input
	cout << "Enter an integer for x: ";
	cin >> x;

	cout << "Enter an integer for y: ";
	cin >> y;

	//Call Recursive Function and Display Answer
	cout << "The Value for X= " << x << " and Y= " << y << " is: " << foo(y, x);

	cout << endl;

	//Display Total Number of Recursive Calls
	cout << "The Total Number of Recursive Calls is : " << counter;

	return 0;
}

//Function Definition
int foo(int y, int x) {
	//Counter Incrementer to Keep Track of Recursive Calls
	counter++;

	//If else If Statements Depending on Information
	if (x == 1) {
		return y;
	}
	else if (x == y) {
		return 0;
	}
	else if ((y > x) && (x > 1)) {
		return (foo(y - 1, x - 1) + 3 * foo(y - 1, x));
	}
