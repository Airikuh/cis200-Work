//Program That Gets Information From Linked List
#include<iostream>

struct listrec {
	int value;
	struct listrec* next;
};

//Function to Determine Size of Linked List
int listsize(struct listrec* start) {

	//Variable to Count Number of Items in List
	int count = 0;

	//While Loop to Continue Until Start=Last, End of List
	while (start != NULL) {
		//Increment Number of Items
		count++;

		//Move to Next Item
		start = start->next;
	}
	//Return Number of Items in List
	return count;
}

//Function to Determine Sum of Linked List
int listsum(struct listrec* start) {

	//Variable to Track Sum of List
	int sum = 0;

	//Variable to Temporarily Hold Values
	listrec* temp = start;

	//While Loop to Continue Until Start=Last, End of List
	while (temp != NULL) {

		//Add Total to Previous Ones
		sum += temp->value;

		//Move to Next Item In List
		temp = temp->next;
	}
	//Return Total Amount of List Items
	return sum;
}

using namespace std;


int main() {
	//Create Start of Linked List
	struct listrec* start = NULL;

	//Create Next Item of Linked List Linking to Start of List
	struct listrec* x = new listrec;
	x->value = 3;
	x->next = NULL;

	//Create Next Item of Linked List Linking to Previous
	struct listrec* x2 = new listrec;
	x2->value = 5;
	x2->next = x;

	//Create Next Item of Linked List Linking to Previous
	struct listrec* x3 = new listrec;
	x3->value = 4;
	x3->next = x2;

	//New Start of Linked List 
	start = x3;

	//Function Call to Determine Size of List
	int size = listsize(start);

	//Display Size of List
	cout << "The Size of the List is: " << size << endl;

	//Function Call to Deteremine Sum of List Items
	int sum = listsum(start);

	//Display Sum of List Items
	cout << "The Sum of the List is: " << sum << endl;


	return 0;
}
