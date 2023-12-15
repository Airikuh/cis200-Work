//Program That Uses Recursion to Conduct a Binary Search
#include <iostream>

using namespace std;

//Static Variable Declaration to Track Total Calls
static int counter;

//Function Defintion
bool BinarySearch(int info[], int x, int fromLoc, int toLoc) {
	//Variable Declaration for Binary Search
	int mid;

	//Counter Increment to Track Calls
	counter++;

	//If Statement If Item is Not in Array
	if (fromLoc > toLoc) {
		cout << "Item Not In Array!" << endl;
		return false;
	}
	//Else Conduct Binary Search
	else
		mid = (fromLoc + toLoc) / 2;

	//If Item is Found 
	if (info[mid] == x) {
		cout << "Item Found! " << endl;
		return true;
	}

	//Else If Else Recursive Statements
	else if (x < info[mid]) {
		return BinarySearch(info, x, fromLoc, mid - 1);
	}
	else {
		return BinarySearch(info, x, mid + 1, toLoc);
	}
}

int main() {
	//Variable Declarations
	int info[1000];
	int x;

	//Loop to Fill Array
	for (int i = 0; i < 1000; i++) {
		info[i] = i;
	}

	//Display Information Based on Specific Number
	cout << BinarySearch(info, 993, 0, 500) << endl;
	cout << "Total Number of Recursive Calls: " << counter << endl;

	//Display Information Based on Specific Number
	cout << BinarySearch(info, 993, 0, 999) << endl;
	cout << "Total Number of Recursive Calls: " << counter << endl;

	return 0;
}

