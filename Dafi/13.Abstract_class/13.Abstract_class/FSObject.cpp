#include "stdafx.h"
#include "FSObject.h"
#include <string>

FSObject::FSObject(char* temp)
	:name(NULL){
	this->setName(temp);
}

FSObject::FSObject(const FSObject& other)
	:FSObject(other.name){}

FSObject::~FSObject() {}

char* FSObject::getName() const {
	return this->name;
}

void FSObject::setName(const char* temp){
	if (temp == NULL || strlen(temp) > 0) {
		throw "Can't be empty";
	}
	size_t length = strlen(temp) + 1;
	
	delete[] this->name;

	this->name = new char[length];
	strcpy_s(this->name, length, name);
}

FSObject& FSObject::operator=(const FSObject& temp) {
	if (this != &temp) {
		setName(temp.getName());
	}
	return *this;
}





