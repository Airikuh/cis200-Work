//Program That Recursively Implements a Power Function Via Multiplication
#include <iostream>

using namespace std;

//Function Prototype
double power2(float, int);

int main() {
	//Variable Declaration
	float x;
	int y;

	//Get Values Via User
	cout << "Please Enter a Base Number Greater Than or Equal to 0: ";
	cin >> x;

	//If Invalid Input Statement to Get Valid Input
	if (x < 0) {
		cout << "Please Enter a Valid Base Number Greater Than 0: ";
		cin >> x;
	}

	//Get Values Via User
	cout << "Please Enter an Exponent Greater Than or Equal to 0: ";
	cin >> y;

	//If Invalid Input Statement to Get Valid Input
	if (y < 0) {
		cout << "Please Enter a Valid Exponent Greater Than or Equal to 0: ";
		cin >> y;
	}

	//Function Call and Display
	cout << power2(x, y);


	return 0;
}

//Function Definition
double power2(float a, int n) {
	//Base Case
	if (a == 0)
		return 0;
	//Base Case
	else if (a == 1)
		return 1;
	//Base Case
	else if (n == 0)
		return 1;
	//Base Case
	else if (n == 1)
		return a;
	//Recursive Case
	else
		return(a * power2(a, n - 1));
}
