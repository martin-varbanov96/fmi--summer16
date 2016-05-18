#ifndef STACK_H
#define STACK_H

#include "List.h"

class Stack : private List{
    public:
        Stack();

        bool isEmpty() const;
        void print() const;

        void push(int);
        void pop();
        int top();

};
#endif // STACK_H
