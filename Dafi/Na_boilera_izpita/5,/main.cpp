#include <iostream>

using namespace std;

struct stack_cl{
    int info;
    stack_cl *link;
};

void push(stack_cl **t, int x){
    stack_cl *p;
    if((p = new stack_cl) == NULL){
        cout << "\nНяма свободна памет";
        exit(1);
    }
    p->info = x;
    p->link = NULL;    //tuka ko trqbva
    *t = p;
}

int main()
{
    stack_cl *stack; //tuka trqbva da e taka
    push(&stack, 1);
}
