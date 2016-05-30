#pragma once
#ifndef  TICKET_H_GROUP
#define TICKET_H_GROUP
#include "Ticket.h"

class Group_ticket : public Ticket {
public:
	Group_ticket(const char* = "", double = 0, size_t = 4);
	size_t getCount() const;
	virtual Ticket::Type getType() const;
private:
	size_t count;

};
#endif // ! TICKET_H
