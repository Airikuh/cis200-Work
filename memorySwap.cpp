//Program That Swaps Values by Swapping Memory Addresses
#include <iostream>

using namespace std;

//Function Definition to Swap Memory Addresses
void swap2(int* x, int* y) {
	//Temporary Variable to Hold Information While Swapping
	int temp;

	//Temporary Variable to Hold Address of First Variable 
	temp = *x;

	//First Memory Address is Now the Same as Second
	*x = *y;

	//Second Variable Now Has Address of First
	*y = temp;
}

int main() {
	//Variable Declarations
	int a = 10, b = 20;

	//Print Values
	cout << "a= " << a << " b= " << b << endl;

	//Function Call Including Pass by Reference for Memory Addresses
	swap2(&a, &b);

	//Print The Variable's New Values
	cout << "a= " << a << " b= " << b << endl;



	return 0;
}
