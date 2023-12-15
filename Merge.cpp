//Program That Uses Merge to Sort Arrays
#include <iostream>

using namespace std;

//Global Variable to Count Number of Comparisons
int counter = 0;


//Merge Function to Merge Subarrays Into Ascending Order
template <class ItemType>
void Merge(ItemType array[], int low, int high, int mid) {
	//Array of ItemType to Hold Information While Comparing
	ItemType temp[50];

	//Variable Declaration and Initialization For Comparisons
	int x = low;
	int y = low;
	int z = mid + 1;

	//While Loop to Loop As Long As Low is Less Than Middle And Middle + 1 is Less Than High
	while (x <= mid && z <= high) {

		//Increment Counter As Comparison Occurred
		counter++;
		//If Statement For Low Being Less Than Middle + 1
		if (array[x] < array[z]) {
			//Hold Value in Temporary Array
			temp[y] = array[x];
			//Increment x and y values
			x++;
			y++;

		}
		//Else For All Other Cases
		else {
			//Hold Value in Temporary Array
			temp[y] = array[z];
			//Increment y and z values
			y++;
			z++;
		}
	}
	//While Loop For x Less Than or Equal to Middle Value
	while (x <= mid) {
		//Hold Value in Temporary Array
		temp[y] = array[x];
		//Increment x and y values
		y++;
		x++;
	}

	//While Loop For z Less Than or Equal to High Value
	while (z <= high) {
		//Hold Value in Temporary Array
		temp[y] = array[z];
		//Increment y and z values
		y++;
		z++;
	}
	//For Loop to Put Sorted Information Into Array
	for (x = low; x < z; x++) {
		array[x] = temp[x];
	}

}

//Recursive Merge Sort Function
template <class ItemType >
void RecursiveMerge(ItemType array, int first, int last) {
	//Declare Variable to Hold Middle Value
	int mid;

	//If Statement to Split And Merge Subarrays
	if (first < last) {
		//Set Middle Value
		mid = (first + last) / 2;

		//Split Arrays Into Subarrays by Calling Self
		RecursiveMerge(array, first, mid);
		RecursiveMerge(array, mid + 1, last);

		//Merge Function Call to Merge Two Subarrays With Array Now Sorted
		Merge(array, first, last, mid);

	}

}

//Merge Sort Template Function
template <class ItemType>
void MergeSort(ItemType values[], int numValues) {
	//Set Comparision Variable to Zero
	counter = 0;

	//Recursive Merge Sort Function Call
	RecursiveMerge(values, 0, numValues - 1);

	//Display Comparison Information
	cout << counter << endl;

}


int main() {
	//Array Declarations and Initializations
	int val_array[10] = { 43, 7, 10, 23, 18, 4, 19, 5, 66, 14 };
	float val_array2[10] = { 43.2, 7.1, 10.5, 23.9, 18.7, 4.2, 19.3, 5.7, 66.8, 14.4 };
	char val_array3[10] = { 'u', 'v', 'w', 'x', 'y', 'a', 'b', 'c', 'd', 'e' };

	//Variable Declaration and Initialization For Total Elements in Arrays
	int numValues = 10;

	//Display Specific Sorting Algorithm Used
	cout << "Merge Sort: " << endl;

	//Function Calls With The Different Array Information
	cout << "val_array Comparisons: " << endl;
	MergeSort(val_array, numValues);

	cout << "val_array2 Comparisons: " << endl;
	MergeSort(val_array2, numValues);

	cout << "val_array3 Comparisons: " << endl;
	MergeSort(val_array3, numValues);



	return 0;
}


