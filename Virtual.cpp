//Source.cpp Source File For Main Function
#include "Virtual.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	//Pointers to Base Class Required For Polymorphism
	Pet* nick, * jeff, * chris, * sam;

	//Memory Allocation, Food, and Attribute Set For Each Pointer
	nick = new Cat("Meow Mix", "blue");
	jeff = new Monkey("Banana", false);
	chris = new Lizard("Flies", 5);
	sam = new Turtle("Lettuce", 0.5);

	//Feed Method Calls, Attribute Method Implicitly Called
	nick->feed();
	jeff->feed();
	chris->feed();
	sam->feed();

	//Speak Method Calls
	nick->speak();
	jeff->speak();
	chris->speak();
	sam->speak();

	return 0;



}
