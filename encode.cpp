//Program to Get Input Via User and Encode It
#include <iostream>
#include <string>

using namespace std;

int main() {
	//Variable and Array Declarations
	int x = 0, y, index;
	char plain[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cipher[] = "DEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzABC";
	char plainNew[75];
	char cipherNew[75];

	//Get Input From User and Put it Into Array
	cout << "Please Enter The Input You Would Like Encoded: " << endl;
	cin.getline(plainNew, 75);

	//Loops to Cycle Through and Encode Input
	while (plainNew[x] != '\0') {
		index = -1;
		y = 0;
		while (plain[y] != '\0') {
			if (plain[y] == plainNew[x]) {
				index = y;
				break;
			}
			y++;
		}
		if (index != -1) {
			cipherNew[x] = cipher[y];
		}
		else {
			cipherNew[x] = plainNew[x];
		}
		x++;
	}

	cipherNew[x] = '\0';

	//Display Original Information and Encoded Information
	cout << "The Text Entered Was: " << plainNew << endl;
	cout << "Text Encoded: " << cipherNew << endl;



	return 0;
}

