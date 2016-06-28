#include <iostream>

using namespace std;

struct queue_el{
    float info;
    queue_el *link;
};

float deque(queue_el *f, queue_el **r){
    float x;
    queue_el *p = f->link;
    if(p == NULL){
        cout << "\nОпашката е пълна\n";
        exit(1);
    }
    f -> link = p -> link; //tuka tova da se nazubri
    x = p->info;
    delete p;
    if(f->link == NULL)
    r = &f; //tuka tova da se nazubri
    return x;

    //147
    //TODO:: dovidi


}

int main()
{
    float y;
    queue_el Q, *F = &Q, *R;
    y = deque(F, &R);
    return 0;
}
