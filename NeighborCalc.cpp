//Program That Calculates Max, Min, Mean, and Neighboring Values in 2-D Array
#include <iostream>
#include <iomanip>

using namespace std;

//Global Definitions
#define NUM_ROW 4
#define NUM_COLUMN 4



//Minimum and Maximum Calculate and Print Function
void printMinAndMax(float Value[NUM_ROW][NUM_COLUMN]) {
	//Variable Declarations
	float minimum = Value[0][0];
	float maximum = Value[0][0];

	//Loops to Determine Minimum and Maximum Values
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (Value[i][j] < minimum) {
				minimum = Value[i][j];
			}
			if (Value[i][j] > maximum) {
				maximum = Value[i][j];
			}
		}
	}
	//Print Minimum and Maximum Values to Screen
	cout << endl;
	cout << "The Minimum Value in The Array is:  " << minimum << endl;
	cout << endl;
	cout << "The Maximum Value in The Array is:  " << maximum << endl;
}

//Mean Calculate and Print Function
void mean(float Value[NUM_ROW][NUM_COLUMN]) {
	//Variable Declarations
	float sum = 0;
	float meanValue;
	//Loop to Cycle Through and Add Up Values for Sum
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			sum = sum + Value[i][j];
		}
	}
	//Calculate Mean by Dividing Sum by Total Number of Values in 2-D Array
	meanValue = sum / 16;

	//Display Mean
	cout << "The Mean of The Values in The Array is:  " << meanValue << endl;
	cout << endl;

}

//Find and Print Neighbor Function
void findNeighbors(float Value[NUM_ROW][NUM_COLUMN], int i, int j) {
	//Display User Choice Starting Point
	cout << "Our Current Location i,j: " << Value[i][j] << endl;
	cout << endl;

	cout << "The Neighboring Values are: " << endl;
	cout << endl;

	//Determine and Print Horizontal Neighbors
	cout << "Neighboring Left Element w: " << endl;
	cout << Value[(i - 1 + 4) % 4][j] << endl;

	cout << "Neighboring Right Element r: " << endl;
	cout << Value[(i + 1) % 4][j] << endl;

	//Determine and Print Vertical Neighbors
	cout << "Neighboring Up Element t:  " << endl;
	cout << Value[i][(j + 1) % 4] << endl;

	cout << "Neighboring Down Element z:  " << endl;
	cout << Value[i][(j - 1 + 4) % 4] << endl;


}


int main() {
	//Variable Declarations
	float Value[NUM_ROW][NUM_COLUMN] = {
	2.1, 2.2, 2.3, 2.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2,
	2.1, 2.2, 2.3, 2.4
	};
	int i, j;

	//Print Our 2-D Array So Number's Can be Verified
	cout << "The Values in Our 2D Array are: " << endl;
	for (int R = 0; R < NUM_ROW; ++R) {
		for (int C = 0; C < NUM_COLUMN; ++C) {
			cout << Value[R][C] << " ";

		}
	}

	//Min and Max Funcation Call
	printMinAndMax(Value);

	//Mean Function Call
	mean(Value);

	//Get User Input
	cout << "Please Input a Number: " << endl;
	cout << "i: ";
	cin >> i;

	cout << "Please Input Another Number: " << endl;
	cout << "j: ";
	cin >> j;
	cout << endl;

	//Find Neighbors Function Call
	findNeighbors(Value, i, j);


	return 0;
}
