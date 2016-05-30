#include "stdafx.h"
#include "List.h"

List::List()
	:first(NULL), last(NULL){}

//TODO:: 	~ List();

List::List(const List& temp)
	:first(NULL), last(NULL){
	copy(temp);
}
List& List::operator=(const List& temp) {
	if (this != &temp) {
		clear();
		copy(temp);
	}
	return *this;
}
void List::toEnd(int elem) {
	Node* current = new Node(elem);
	if (!isEmpty()) {
		this->last->next = current;
	}
	else {
		first = current;
	}
	last = current;
}
void List::copy(const List& temp) {
	Node* current = temp.first;
	while (current){
		this->toEnd(current->value);
		current = current->next;
	}
}
void List::clear() {
	Node *current = this->first;
	while (current) {
		current = this->last;
		delete first;
		first = current;
	}
	this->first = this->last = NULL;
}
bool List::isEmpty() const {
	if (this->first == NULL && this->last == NULL) {
		return true;
	}
	return false;
}