2.)
//Program to Convert a Decimal Number to Binary
#include<iostream>

//Function Prototype for Conversion
long binaryConversion(int);

using namespace std;

int main() {
	//Variable Declaration
	int value;
	long binary;

	//Get User Input
	cout << "Please Enter a Positive Integer and I Will Convert it To Binary: " << endl;
	cin >> value;

	//Loop to Get Valid Input
	while (value < 0){
		cout << "Please Enter an Integer Greater Than 0: ";
		cin >> value;
	}

	//Function Call
	binary = binaryConversion(value);

	//Binary Display
	cout << "Your Number Converted From Decimal to Binary is : " << binary;

	   
	return 0;
}

//Binary Conversion Function
long binaryConversion(int value) {

	//Variable Declaration
	long binary = 0;
	long remainder;
	long x = 1;

	//While Decimal to Binary Loop to Convert
	while (value != 0) {
		remainder = value % 2;
		binary = binary + remainder * x;
		x = x * 10;
		value = value / 2;
	}

	//Return Converted Value
	return binary;
}
