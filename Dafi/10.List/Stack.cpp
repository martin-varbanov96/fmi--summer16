#include "Stack.h"

Stack::Stack()
    :List(){}

bool Stack::isEmpty() const{
    return List::isEmpty();
}
void Stack::print() const{
    List::print();
}
void Stack::push(int elem){
    Node *top = this->begin();
    this->insertBefore(elem, top);
}
void Stack::pop(){
    Node *top = this->begin();
    this->removeAt(top);
}
int Stack::top(){
    if(this->isEmpty()){
        throw "The stack is empty!";
    }
    Node *top = this->begin();
    return top->data;
}
