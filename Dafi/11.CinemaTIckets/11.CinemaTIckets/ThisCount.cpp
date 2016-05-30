#include "stdafx.h"
#include "ThisCount.h"
#include <cstring>

void DiscountTicket::setName(const char* name) {
	if (!name)
		return;
	size_t length = strlen(name) + 1;
	delete[] this->name;
	this->name = new char[length];
	strcpy_s(this->name, length, name);
}
DiscountTicket::DiscountTicket(const char* title, double price, const char* name)
	:Ticket(title, price), name(NULL){
	this->setName(name);
	this->setPrice(0.8 * this->getPrice());
}
DiscountTicket::DiscountTicket(const DiscountTicket& other) 
	:Ticket(other), name(NULL){
	this->setName(other.name);
}
DiscountTicket& DiscountTicket::operator=(const DiscountTicket& other) {
	if (this != &other) {
		Ticket::operator=(other);
		this->setName(other.name);
	}
	return *this;
}
DiscountTicket::~DiscountTicket() {
	delete[] this->name;
}
const char* DiscountTicket::getName() const {
	return this->name;
}

Ticket::Type DiscountTicket::getType() const {
	return Ticket::DISCOUNT;
}