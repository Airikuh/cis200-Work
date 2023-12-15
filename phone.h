//phone.h File For Class Definitions
#pragma once
#include <iostream>
using namespace std;

//Phone Class 
class Phone {
	//Phone Attributes
	int age;
	float price;

//Public Methods
public:
	//Default Constructor With Inline Definition
	Phone() { age = 0; price = 0.0; }

	//Parameterized Constructor With Inline Definition
	Phone(int a, float b) { age = a; price = b; }
	
	//Set Methods
	void setAge(int);
	void setPrice(float);

	//Get Methods
	int getAge();
	float getPrice();



};


//Iphone Class
class Iphone: public Phone {
	//Iphone Attributes
	int AppleId;

//Public Methods
public:

	//Default Constructor With Inline Definition
	Iphone() { AppleId = 0; }

	//Set Methods
	void setAppleId(int x);

	//Get Methods
	int getAppleId();
	   
};


//Iphone8 Class
class Iphone8 : public Iphone {
	//Iphone8 Attributes
	bool augmentedRealityStatus;

//Public Methods
public:

	//Default Constructor With Inline Definition
	Iphone8() { augmentedRealityStatus = false; }

	//Set Methods
	void setAugmentedRealityStatus(bool x);

	//Get Methods
	bool getAugmentedRealityStatus();
};
//FunctionDefinitions.cpp Source File For Method Definitions
#include "Header.h"

//Class Phone Set Method for Age
void Phone::setAge(int x) {
	age = x;
}

//Class Phone Set Method for Price
void Phone::setPrice(float x) {
	price = x;
}

//Class Phone Get Method for Age
int Phone::getAge() {
	return age;
}

//Class Phone Get Method for Price
float Phone::getPrice() {
	return price;
}

//Class Iphone Set Method for Apple Id
void Iphone::setAppleId(int x) {
	AppleId = x;
}

//Class Iphone Get Method for Apple Id
int Iphone::getAppleId() {
	return AppleId;
}

//Class IPhone8 Set Method for Augmented Reality Status
void Iphone8::setAugmentedRealityStatus(bool x) {
	augmentedRealityStatus = x;
}

//Class IPhone8 Get Method for Augmented Reality Status
bool Iphone8::getAugmentedRealityStatus() {
	return augmentedRealityStatus;
}

