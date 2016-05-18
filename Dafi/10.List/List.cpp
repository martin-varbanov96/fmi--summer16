#include "List.h"
#include <iostream>

using namespace std;

List::List()
    :first(NULL), last(NULL){}

List::List(const List& other)
    :first(NULL), last(NULL){
    cout << "List::List(const List&)" << endl;
    copy(other);
}

void List::toEnd(int elem){
    Node* newElem = new Node(elem);
    if(!isEmpty()){
        last->next = newElem;
    }else{
        first = newElem;
    }
    last = newElem;
}
bool List::isEmpty() const{
    return this->first == NULL;
}
void List::print() const{
    Node *current = this->first;
    if(!isEmpty()){
        while(current){
            cout << current->data << ' ';
            current = current->next;
        }
    }else{
        cout << "List is empty" << endl;
    }
}

void List::copy(const List& other){
    Node *current = other.first;
    while(current){
        this->toEnd(current->data);
        current = current->next;
    }
}
void List::clear(){
    Node *current = this->first;
    while(current){
        current  = first->next;
        delete first;
        first = current;
    }
    this->first = this->last = NULL;
}

List& List::operator = (const List& other){
    cout << "LIST::OPERATOR + " << endl;
    if(this != &other){
        clear();
        copy(other);
    }
    return *this;
}
List::~List(){
    clear();
}
void List::insertAfter(int elemn, Node* position){
    Node *newElem = new Node(elemn, position->next);
    position->next = newElem;
    if(position == last){
        last = newElem;
    }
}
void List::insertBefore(int elem, Node* position){
    if(!position){
        if(this->isEmpty()){
            this->toEnd(elem);
        }
    }else{
        Node *newElem = new Node(elem, position);
        if(position == this->first){
            first = newElem;
        }else{
            Node *prev = this->first;
            while(prev->next != position){
                prev = prev->next;
            }
            prev->next = newElem;
        }
    }
}

void List::removeAfter(Node *position){
    if(!position){
        return;
    }
    Node *forDel = position->next;
    if( last == forDel){
        last = position;
    }else{
        position->next = forDel->next;
        delete forDel;
    }
}
void List::removeAt(Node*& position){
    if(!position){
        return;
    }
    if(position == first){
        first = first->next;
        if(!first){
            last = NULL;
        }
    }else{
        Node *current = this->first;
        while(current->next != position){
            current = current->next;
        }
        current->next = position->next;
        if(position == last){
            last = current;
        }
    }
    delete position;
    position = NULL;
}
Node *List::begin(){
    return this->first;
}
