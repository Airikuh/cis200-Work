//Program to Get Unsigned Char Value and Use Array Flag
#include<iostream>

using namespace std;

//Boolean Flag Array
bool flag[8];

//Function Definition
void setFlag(unsigned char x) {
	
	//Variable Declaration
	unsigned char option = 0b00000001;

	//For Loop to Fill Array
	for (int i = 0; i < 8; i++) {
		flag[8 - i - 1] = ((option & x) != 0);

		//Bitwise Operator to Shift left One to Fill Values
		option = option << 1;
	}

}

int main() {
	//Variable Declaration
	unsigned char x;

	//Get User Input
	cout << "Please Enter a Number From 0-255: " << endl;
	cin >> x;

	//Function Call
	setFlag(x);

	//For Loop to Print Flags
	for (int i = 0; i < 8; i++) {
		cout << flag[i];
	}


	return 0;
}
