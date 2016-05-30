#include <iostream>
#define M 100
using namespace std;

typedef float ElementType;
struct Queue{
    int f;
    int r;
    ElementType QueueArray[M];
    void enqueue(struct Queue *q, ElementType x){
        if((q->r+1)%M == q->f){
            cout << "prepulvane" << endl;
            exit(1);
        }
        q->r=(q->r+1)%M;//remember
        q->QueueArray[q->r] = x;
    }
};

int main()
{
    Queue q;
    q.enqueue(&q, 1.0);
    return 0;
}
