//Program that Uses Typedef with an Array
#include <iostream>

//Creation of 2-D Array of Own Data Type
typedef float REAL33[3][3];

using namespace std;

int main() {
	REAL33 a, b;

	for(int i=0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			a[i][j] = i * j;
				cout << a[i][j] << " ";
		}

	return 0;
}
