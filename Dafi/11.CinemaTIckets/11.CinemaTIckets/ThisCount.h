#pragma once

#ifndef this_h
#define this_h
#include "Ticket.h"

class DiscountTicket: public Ticket {
private:
	char* name;
	void setName(const char*);


public:
	DiscountTicket(const char* = "", double = 0.0, const char* = "");
	DiscountTicket(const DiscountTicket&);
	DiscountTicket& operator=(const DiscountTicket&);
	~DiscountTicket();

	const char* getName() const;
	virtual Ticket::Type getType() const;

};
#endif // !1