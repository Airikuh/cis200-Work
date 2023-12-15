//Virtual.h Header File For Classes And Definitions For Program
//That Uses Polymorphism
#pragma once
#include <iostream>
#include <string>

using namespace std;

//Base Class Pet 
class Pet {
protected:
	//Attribute For Type of Food
	string food;

public:
	//Method to Retrieve Protected Object
	Pet(string food) { this->food = food; }

	//Pure Virtual Functions to Be Defined in Derived Classes
	virtual void feed(void) = 0;
	virtual void speak(void) = 0;
};

class Cat : public Pet {
public:
	//Color of Cat Attribute
	string color;

	//Method to Retrieve and Display Color of Cat
	//Implicitly With Base Class To Display Before Feed Function
	//When Feed Function Called
	Cat(string food, string color) : Pet(food){
		//This Pointer to Retrieve String Color 
		this->color = color;

		//Print Color of Cat to Screen
		cout << "Got a " << color << " cat" << endl;
	}

	//Virtual Function Food Element Defined  
	virtual void feed(void) {
		//Pointer to Retrieve Type of Food
		this->food = food;

		//Print Type of Food Cat Eats
		cout << "Eats " << food << endl;
	}

	//Virtual Speak Function Voice Displayed 
	virtual void speak(void) {
		//Print How Cat Speaks
		cout << "Meow!" << endl;
	}
};


class Monkey : public Pet {
public:
	//True False Tail Attribute
	bool tail;

	//Method to Retrieve and Display Tail Information
	//Implicitly With Base Class To Display Before Feed Function
	//When Feed Function Called
	Monkey(string food, bool tail) : Pet(food) {
		//This Pointer to Retrieve Tail Variable  
		this->tail = tail;

		//If Statement If False is Passed Into Method
		if (tail == false) {
			cout << "Got a monkey with no tail" << endl;
		}
		//Else Statement If True is Passed Into Method
		else {
			cout << "Got a monkey with a tail" << endl;
		}
	}

	//Virtual Function Food Element Defined  
	virtual void feed(void){
		//Pointer to Retrieve Type of Food
		this->food = food;

		//Print Type of Food Monkey Eats
		cout << "Eats " << food << endl;
	}

	//Virtual Speak Function Voice Displayed 
	virtual void speak(void) {
		//Print How Monkey Speaks
		cout << "*Scratches Pit*" << endl;
	}


};

class Lizard : public Pet {
public:
	//Length of Tongue Attribute
	int length;


	//Method to Retrieve and Display Lizard Tongue Size
	//Implicitly With Base Class To Display Before Feed Function
	//When Feed Function Called
	Lizard(string food, int length) : Pet(food) {

		//This Pointer to Retrieve Length Variable 
		this->length = length;

		//Display Tongue Length to Screen
		cout << "Got a lizard with a " << length << "cm tongue" << endl;
	}

	//Virtual Function Food Element Defined  
	virtual void feed(void) {
		//Pointer to Retrieve Type of Food
		this->food = food;

		//Print Type of Food Lizard Eats
		cout << "Eats " << food << endl;
	}

	//Virtual Speak Function Voice Displayed 
	virtual void speak(void) {
		//Print How Lizard Speaks
		cout << "Grrrrrrr~ " << endl;
	}



};

class Turtle : public Pet {
public:

	//Weight of Turtle Attribute
	double weight;


	//Method to Retrieve and Display Weight of Turtle
	//Implicitly With Base Class To Display Before Feed Function
	//When Feed Function Called
	Turtle(string food, double weight) : Pet(food) {

		//This Pointer to Retrieve Weight Variable 
		this->weight = weight;

		//Display Weight of Turtle to Screen
		cout << "Got a " << weight << "-pound turtle" << endl;
	}

	//Virtual Function Food Element Defined  
	virtual void feed(void) {
		//Pointer to Retrieve Type of Food
		this->food = food;

		//Print Type of Food Turtle Eats
		cout << "Eats " << food << endl;
	}

	//Virtual Speak Function Voice Displayed 
	virtual void speak(void) {
		//Print How Trutle Speaks
		cout << "*Turtle noise*" << endl;
	}


};
