#include "stdafx.h"
#include "Ticket.h"
#include <cstring>

void Ticket::setTitle(const char* name) {
	if (!name)
		return;
	size_t length = strlen(name) + 1;
	delete[] this->title;
	this->title = new char[length];
	strcpy_s(this->title, length, name);

}

void Ticket::setPrice(double price) {
	this->price = (price <= 0) ? 0.0 : price;
}

Ticket::Ticket(const char* name, double price) 
	:title(NULL){
	this->setTitle(name);
	this->setPrice(price);
}
Ticket::Ticket(const Ticket& other)
	: Ticket(other.title, other.price) {
}
Ticket& Ticket::operator=(const Ticket& other) {
	if (this != &other) {
		this->setPrice(other.price);
		this->setTitle(other.title);
	}
	return *this;
}
Ticket::~Ticket() {
	delete[] this->title;
}
const char* Ticket::getTitle() const {
	return this->title;
}
double Ticket::getPrice() const {
	return this->price;
}
Ticket::Type Ticket::getType() const {
	return Ticket::NORMAL;
}
