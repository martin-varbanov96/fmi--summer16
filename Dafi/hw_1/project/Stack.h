#ifndef STACK
#define STACK
const int MAX_SIZE = 52;

class StackOverFlowException
{
    public:
        StackOverFlowException();
};

class StackUnderFlowException
{
    public:
        StackUnderFlowException();
};

class ArrayStack
{
    private:
        int data[MAX_SIZE];
        int top;
    public:
        ArrayStack();
        void Push(int element);
        int Pop();
        int Top();
        int Size();
        bool isEmpty();
};
#endif
