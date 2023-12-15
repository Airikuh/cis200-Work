//Program That Uses Fibonacci Sequence to Calculate Answer and Provides Time Execution
#include <iostream>
#include <time.h>

using namespace std;

//Function Prototypes
int fib1(int);
int fib2(int);

int main() {
	//Variable Declarations
	int n = 40;
	clock_t start, end;
	float duration, sum_time;

	//Start Clock
	start = clock();

	//Call and Display Calculation
	cout << "The Calculation of The Function fib1(): the Fibonacci Sequence Recursively = " << fib1(n) << endl;

	//End Clock and Calculate Time
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;

	//Display Time Calculation
	cout << "Duration = " << duration << " (sec) " << endl;

	system("pause");

	return 0;
}

//Function That Calculates Fibonacci Sequence Recursively
int fib1(int x) {
	//If Else If Recursive Statements
	if ((x == 1) || (x == 2)) {
		return 1;
	}
	else if (x > 2) {
		return (fib1(x - 1) + fib1(x - 2));
	}
}

//Function That Calculates Fibonacci Sequence Without Redundent Function Calls
int fib2(int x) {
	//Variable Declarations
	int previous = 1, current = 1, next = 1;

	//Compute Values Via Iteration
	for (int i = 3; i <= x; i++) {
		next = current + previous;
		previous = current;
		current = next;
	}
	//Return Value
	return next;
}
