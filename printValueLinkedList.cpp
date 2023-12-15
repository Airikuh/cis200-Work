//Program That Uses Linked List And Prints Values in List
#include <iostream>

struct listrec {
	char value;
	struct listrec* next;
};

using namespace std;

//Function Definition for Printing List
void printlist(listrec* start_of_linked_list) {

	//While Loop to Loop Until End of List
	while (start_of_linked_list != NULL) {

		//Display Content in Node
		cout << start_of_linked_list->value << " ";

		//Move to Next Node
		start_of_linked_list = start_of_linked_list->next;
	}
}

void main() {
	//Pointer Declarations
	listrec* head_old = NULL;
	listrec* second = NULL;
	listrec* third = NULL;

	//Allocate Nodes in the Heap
	head_old = new listrec();
	second = new listrec();
	third = new listrec();

	//Assign Data in First Node
	head_old->value = 'a';

	//Link First Node to Second Node
	head_old->next = second;

	//Assign Data in Second Node
	second->value = 'c';

	//Link Second Node to Third Node
	second->next = third;

	//Assign Data in Third Node
	third->value = 'w';

	//End of List
	third->next = NULL;

	//Function Call to Print Out Content in Nodes of Linked List
	printlist(head_old);



}
