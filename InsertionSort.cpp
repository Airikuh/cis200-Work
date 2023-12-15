//Program That Sorts Array Elements
#include<iostream>

using namespace std;

//Template Function For Insertion Sort
template<class ItemType>
void InsertionSort(ItemType values[], int numValues) {
	//Variable Declaration And Initialization To Keep Track of Comparisons And Swaps
	int numComparisons = 0;
	int numSwaps = 0;
	
	//Instance of ItemType To Hold Temporary Variable Used in Swap
	ItemType tempVal;

	//For Loop 
	for (int count = 1; count < numValues; count++) {
		//Temporary Variable To Hold Current Value For Comparison
		tempVal = values[count];
		int compare;
		compare = count - 1;

		//Shift Elements Greater Than Instance Right One Index
		while ((tempVal < values[compare]) && (compare >= 0)) {
			values[count] = values[compare];
			compare--;

			//Increment Number of Comparisions With Each Iteration
			numComparisons++;
		}
		//Insert Element to Correct Position
		values[count] = tempVal;

		//Increment Number of Swaps With Each Iteration
		numSwaps++;
	}

	//Display Total Comparisions And Swaps to Screen
	cout << "Total Number of Comparisons in Insertion Sort: " << numComparisons << endl;
	cout << "Total Number of Swaps in Insertion Sort: " << numSwaps << endl;
	cout << endl;
}

int main() {
	//Array Declarations and Initializations
	int val_array[10] = { 43, 7, 10, 23, 18, 4, 19, 5, 66, 14 };
	float val_array2[10] = { 43.2, 7.1, 10.5, 23.9, 18.7, 4.2, 19.3, 5.7, 66.8, 14.4 };
	char val_array3[10] = { 'u', 'v', 'w', 'x', 'y', 'a', 'b', 'c', 'd', 'e' };

	//Variable Declaration and Initialization For Total Elements in Arrays
	int numValues = 10;

	//Function Calls With The Different Array Information
	cout << " val_array Information " << endl;
	InsertionSort<int>(val_array, numValues);

	cout << "val_array2 Information: " << endl;
	InsertionSort<float>(val_array2, numValues);

	cout << "val_array3 Information: " << endl;
	InsertionSort<char>(val_array3, numValues);



	return 0;
}

