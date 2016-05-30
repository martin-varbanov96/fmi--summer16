#pragma once
#ifndef  TICKET_H
#define TICKET_H
class Ticket{
public:
	enum Type{
		NORMAL, DISCOUNT, GROUP
	};

	Ticket(const char* = "", double = 0.0);
	Ticket(const Ticket&);
	Ticket& operator=(const Ticket&);
	virtual ~Ticket();
	const char* getTitle() const;
	double getPrice() const;

	virtual Type getType() const;
	

private:
	char* title;
	double price;
protected:
	void setPrice(double);
	void setTitle(const char*);

};

#endif // ! TICKET_H