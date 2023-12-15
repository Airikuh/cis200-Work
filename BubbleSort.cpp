//Program That Sorts Array Elements
#include<iostream>

using namespace std;

//Template Function For Bubble Sort
template<class ItemType>
void BubbleSort(ItemType values[], int numValues) {
	//Variable Declaration And Initialization To Keep Track of Comparisons And Swaps
	int numComparisons = 0;
	int numSwaps = 0;

	//Instance of ItemType To Hold Temporary Variable Used in Swap
	ItemType tempVar;
	bool swap;

	for (int current = 0; current < numValues - 1; current++) {
		//Set Swap to False
		swap = false;
		//Minimum Variable to Determine Minimum Values
		int minimum = current;
		//For Loop to Transverse Through All Array Elements
		for (int index = 0; index < numValues - index - 1; index++) {

			if (values[index] > values[index + 1]) {

				//Swap Portion of Function
				//Hold Current Element in Temorary Variable For Swap
				tempVar = values[current];
				values[current] = values[minimum];
				values[minimum] = tempVar;

				//Increment Number of Swaps With Each Iteration
				numSwaps++;
				swap = true;
			}
		}
		//Increment Number of Comparisons With Each Iteration
		numComparisons++;

		//If No Elements Need to Be Swapped, Break Out of Loop
		if (swap == false)
			break;;
	}

	

	//Display Total Comparisions And Swaps to Screen
	cout << "Total Number of Comparisons in Bubble Sort: " << numComparisons << endl;
	cout << "Total Number of Swaps in Bubble Sort: " << numSwaps << endl;
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
	BubbleSort<int>(val_array, numValues);

	cout << "val_array2 Information: " << endl;
	BubbleSort<float>(val_array2, numValues);

	cout << "val_array3 Information: " << endl;
	BubbleSort<char>(val_array3, numValues);



	return 0;
}

