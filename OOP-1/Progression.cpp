#include <iostream>
#include "Progression.h"
using namespace std;

void Progression::init(double first, unsigned int second) {
	this->first = first;
	this->second = second;
}

void Progression::read() {
	cout << "Enter first value (a0): ";
	cin >> this->first;
	cout << endl << "Enter second value (r): ";
	cin >> this->second;
	cout << endl;
}

void Progression::show() {
	cout << "First parameter (a0): " << this->first << endl << "Second parameter (r): " << this->second << endl;
}

double Progression::element(int j) {
	return (this->first * pow(this->second, j));
}

Progression make_progression(double first, unsigned int second) {
	Progression new_progression;
	new_progression.init(first, second);
	return new_progression;
}