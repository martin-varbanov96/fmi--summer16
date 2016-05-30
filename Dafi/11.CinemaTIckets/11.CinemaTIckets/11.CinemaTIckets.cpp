// 11.CinemaTIckets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Ticket.h"
#include "ThisCount.h"
#include "GroupTicket.h"
#include <iostream>
using namespace std;

void printTOtalPrice(Ticket** soldTickets, size_t count) {
	size_t countSold[3] = {0};

	for (size_t i = 0; i < 4; i++) {
		int index = soldTickets[i]->getType();
		++countSold[index];
	}
	const char* typeNames[] = {"NORMAL", "DISCOUNT", "GROUP"};
	for (size_t i = 0; i < 3; i++) {
		cout << typeNames[i] << ": " << countSold[i] << endl;
	}
}

double getTotalPrice(Ticket** soldTickets, size_t count) {
	double totalPrice = 0;
	for (size_t i = 0; i < 4; i++) {
		totalPrice += soldTickets[i]->getPrice();
	}
	return totalPrice;

}

int main()
{
	Ticket** tickets = new Ticket*[4];
	tickets[0] = new Ticket("1", 10);
	tickets[1] = new Group_ticket("1", 10, 12);
	tickets[2] = new Ticket("1", 10);
	tickets[3] = new DiscountTicket("1", 10, "me");

	cout << "Total Price: " << getTotalPrice(tickets, 4) << endl;

	cout << "Count by type: " <<   endl;
	printTOtalPrice(tickets, 4);

	for (size_t i = 0; i < 4; i++) {
		delete tickets[i];
	}
	delete[] tickets;

	return 0;
}

