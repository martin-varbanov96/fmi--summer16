#include "Stack.h"
#include <iostream>
using namespace std;

StackOverFlowException::StackOverFlowException(){
    cout << "Stack overflow" << endl;
}

StackUnderFlowException::StackUnderFlowException(){
    cout << "Stack underflow" << endl;
}
ArrayStack::ArrayStack(){
    top = -1;
}

void ArrayStack::Push(int element)
{
if ( top >= MAX_SIZE )
    {
        throw new StackOverFlowException();
    }
    data[++top] = element;
}

int ArrayStack::Pop()
{
    if ( top == -1 )
        {
            throw new StackUnderFlowException();
        }
        return data[top--];
}

int ArrayStack::Top()
{
    return data[top];
}

int ArrayStack::Size()
{
    return top + 1;
}

bool ArrayStack::isEmpty()
{
    return ( top == -1 ) ? true : false;
}

