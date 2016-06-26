#include "stdafx.h"
#include "Pug.h"
#include <iostream>
using namespace std;

Pug::Pug(char* tempColor)
	:color(NULL){
	setColor(tempColor);
}

Pug::Pug(const Pug& temp)
	:color(NULL){
	this->color = temp.getColor();
}

Pug::~Pug() {}

 char* Pug::getColor() const {
	return this->color;
}

void Pug::setColor(char* tempColor) {
	this->color = tempColor;
}

Pug& Pug::operator=(const Pug& temp) {
	if (this != &temp) {
		this->setColor(temp.getColor());
	}
	return *this;
}

void Pug::printUniqueness() {
	cout << Pug::NORMAL << endl;
}

