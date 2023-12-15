//Program That Does  a Linear Search on Array To Find Number Match
#include <iostream>

using namespace std;

//Function Prototype
bool linearSearch(int a[], int first, int last, int search_item);


int main() {
	//Variable Declarations
	int search_item, first = 0, last = 9;
	int x[] = { 1,2,3,4,5,6,7,8,9,10 };

	//Get Number From User
	cout << "Please Enter a Number to Search for: " << endl;
	cin >> search_item;

	//Function Call
	bool found = linearSearch(x, 0, 9, search_item);

	//If Else Statements To Display If Found or Not Found
	if (found) {
		cout << " Your Number " << search_item << " Was Found in The Array!";
	}

	else {
		cout << " Your Number " << search_item << " Was Not Found in The Array.";
	}


	return 0;
}

//Function Definition
bool linearSearch(int a[], int first, int last, int search_item) {
	//While Loop to Search for Number Match
	while (first <= last) {
		if (a[first] == search_item) {
			return true;
		}
		//Iterator to Move Forward In Search If not Found
		first += 1;
	}
	return false;

}

