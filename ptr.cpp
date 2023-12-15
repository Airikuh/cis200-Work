//Program That Uses Template Function With Pointer Arguments
#include <iostream>

using namespace std;

//Templete and Swap Function 
template <class T> 
void swapt(T* p1, T* p2) {
	//Variable T Declaration to Hold Temp Value During Swap
	T temp;
	//Swap Variables
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main() {
	int x = 30, y = 40;
	swapt(&x, &y);
	cout << "x = " << x << "  y = " << y << endl;

	float w = 3.7, v = 1.2;
	swapt(&w, &v);
	cout << "w = " << w << " v = " << v << endl;

	string a = "good", b = "morning";
	swapt(&a, &b);
	cout << "a = " << a << " b = " << b << endl;

	return 0;
}
