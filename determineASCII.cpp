//Program to Get User Input and Determine Character Based on ASCII Values
#include<iostream>

using namespace std;

int main() {
	//Variable Declaration
	char ch;
	int ASCII;

	//Get User Input
	cout << "Please Enter a Character: ";
	cin >> ch;

	//Convert Character to Integer Based on ASCII Value
	ASCII = int(ch);

	//If-Else Statements to Determine Output
	if (ASCII >= 65 && ASCII <= 90)
		cout << "Input Character is an Upper Case Letter!";
	else if (ASCII >= 97 && ASCII <= 122)
		cout << "Input Character is a Lower Case Letter!";
	else if (ASCII >= 48 && ASCII <= 57)
		cout << "Input Character is a Digit!";
	else
		cout << "Input Character is a Special Symbol!";


	return 0;
}
