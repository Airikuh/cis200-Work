//Program That Sorts Array Elements
#include<iostream>

using namespace std;

//Template Function For Selection Sort
template<class ItemType>
void SelectionSort(ItemType values[], int numValues){
	//Variable Declaration And Initialization To Keep Track of Comparisons And Swaps
	int numComparisons = 0;
	int numSwaps = 0;

	//Instance of ItemType To Hold Temporary Variable Used in Swap
	ItemType tempVar;

	//Selection Sort Portition of Function
	//Variable to Represent End of Array
	int endIndex = numValues - 1;
	for (int current = 0; current < endIndex; current++){

		
		//Minimum Index Portion of Function
		//Minimum Variable to Determine Minimum Values
		int minimum = current;
		//For Loop to Transverse Through All Array Elements
		for (int index = current + 1; index < numValues; index++){
			//If Statement to Find Smallest Element
			if (values[index] < values[minimum])
				minimum = index;
			//Increment Number of Comparisons With Each Iteration
			numComparisons++;
		}
		
		//Swap Portion of Function
		//Hold Current Element in Temorary Variable For Swap
		tempVar = values[current];
		values[current] = values[minimum];
		values[minimum] = tempVar;

		//Increment Number of Swaps With Each Iteration
		numSwaps++;
	}

	//Display Total Comparisions And Swaps to Screen
	cout << "Total Number of Comparisons in SelectionSort: " << numComparisons << endl;
	cout << "Total Number of Swaps in SelectionSort: " << numSwaps << endl;
	cout << endl;
}

int main(){
	//Array Declarations and Initializations
	int val_array[10] = { 43, 7, 10, 23, 18, 4, 19, 5, 66, 14 };
	float val_array2[10] = { 43.2, 7.1, 10.5, 23.9, 18.7, 4.2, 19.3, 5.7, 66.8, 14.4 };
	char val_array3[10] = { 'u', 'v', 'w', 'x', 'y', 'a', 'b', 'c', 'd', 'e' };
	
	//Variable Declaration and Initialization For Total Elements in Arrays
	int numValues = 10;

	//Function Calls With The Different Array Information
	cout << " val_array Information " << endl;
	SelectionSort<int>(val_array, numValues);

	cout << "val_array2 Information: " << endl;
	SelectionSort<float>(val_array2, numValues);

	cout << "val_array3 Information: " << endl;
	SelectionSort<char>(val_array3, numValues);



	return 0;
}
