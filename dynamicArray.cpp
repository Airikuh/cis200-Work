//Program That Dynamically Allocates a 2-D Array
#include <iostream>
#include<cmath>


using namespace std;

//Function bar Definition to Dynamically Allocate a Two-Dimensional Array
void bar(float** x, int length1, int length2) {

	//For Loops to Fill 2-D Array WIth sin(i*j)
	for (int i = 0; i < length1; i++) {
		for (int j = 0; j < length2; j++) {
			x[i][j] = sin(i * j);
		}
	}
}


int main() {
	//Variable Declarations
	int s1, s2;


	//Get User Input
	cout << "Please Enter an Integer For s1: " << endl;
	cin >> s1;

	//Get User Input
	cout << "Please Enter an Integer For s2: " << endl;
	cin >> s2;

	//Dynamically Allocate Two-Dimensional Array
	float** y = new float* [s1];
	for (int j = 0; j < s1; j++) {
		y[j] = new float[s2];
	}

	//Function Call
	bar(y, s1, s2);

	//Loops to Display Information After Finishing bar()
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			cout << "i= " << i << " j= " << j << "y[i][j]= " << y[i][j] << endl;
		}
	}

	//Deallocation of Array Created in bar()
	delete y;

	return 0;
}
