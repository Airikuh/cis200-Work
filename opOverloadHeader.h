//Header.h File For Class A 
#pragma once
#include <iostream>

#define LEN 10

using namespace std;

class A {
	//Private Attributes
	float info[LEN];
	int pos;

	//Public Methods
public:
	//Default Constructor
	A() {	for (int i = 0; i < LEN; i++) info[i] = 0.0;	}

	//Copy Constructor
	A(A& x) {for (int i = 0; i < LEN; i++) info[i] = x.info[i];}

	//= Operator
	A& operator = (A& x) {
		for (int i = 0; i < LEN; i++) {
			info[i] = x.info[i];}

		return *this;}

	//Increment Operator
	A& operator += (A& x) {
		for (int i = 0; i < LEN; i++) {
			info[i] += x.info[i];}

		return *this;}

	//Equality Operator
	bool operator == (A& x) {
		for (int i = 0; i < LEN; i++) {
			if (info[i] != x.info[i])
				return false;}

		return true;}

	//Prefix Operator
	A& operator ++() {
		for (int i = 0; i < LEN; i++) {
			info[i] = ++info[i];}

		return *this;}

	//Postfix Operator
	A& operator ++(int) {
		for (int i = 0; i < LEN; i++)
			info[i] = info[i]++;

		return *this;
	}

	//Addition Operator
	A& operator + (A& x) {
		for (int i = 0; i < LEN; i++)
			info[i] += x.info[i];
		return *this;}


	//Print Method
	void print() {
		for (int i = 0; i < LEN; i++) {
			cout << info[i] << " ";
		}
	}

};
