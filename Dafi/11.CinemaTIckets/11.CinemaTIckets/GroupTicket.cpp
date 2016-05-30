#include "stdafx.h"
#include "GroupTicket.h"
#include <cstring>

Group_ticket::Group_ticket(const char* title, double price, size_t count) 
	:Ticket(title, price){
	
	this->count = (count < 4) ? 4 : count;
	double newPrice = 0.9 * this->count * this->getPrice();
	this->setPrice(newPrice);
}
size_t Group_ticket::getCount() const {

	return this->count;
}
Ticket::Type Group_ticket::getType() const {
	return Ticket::GROUP;
}
