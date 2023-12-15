#include<iostream>

using namespace std;

int main() {

	//Variable Declarations
	int lines;
	char symbol;
	int x, y, z;

	cout << "Please Enter The Number of Lines You Would Like to Have in Your Triangle: " << endl;
	cin >> lines;

	cout << "Please Enter The Symbol You Would Like to Use: " << endl;
	cin >> symbol;

	cout << endl;
	cout << endl;

	//Count Controlled Loop
	for (x = 1; x <= lines; x++) {
		//Count Controlled Loop
		for (y = 1; y < x; y++) {
			cout << " ";
		}

		//Count Controlled Loop
		for (y = 1; y <= (lines * 2 - (2 * x - 1)); y++) {

			//Event Controlled Loop
			if (x == 1 || y == 1 || y == (lines * 2 - (2 * x - 1))) {
				cout << symbol;
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}


	return 0;
}
