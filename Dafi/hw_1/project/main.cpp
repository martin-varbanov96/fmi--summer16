#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

int main()
{

    char spade[] = "\xe2\x99\xa4";
    char heart[] = "\xe2\x99\xa5";
    char diamond[] = "\xe2\x99\xa6";
    char club[] = "\xe2\x99\xa7";


    Deck a;
    a.print();

    a.pop();

    Card b(a.pop());
    b.print();
    a.push(b);

    Card c(a.pop());
    c.print();

    bool hable = a.isEmpty();
    cout << "deck is: " << hable <<endl;

    return 0;
}
