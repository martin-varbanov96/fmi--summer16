#ifndef DECK
#define DECK
#include "Card.h"
class Deck{
    private:
        Card arr[52];
        int idTop;
    public:
        Deck();
        bool isEmpty() const;
        Card pop();
        void push(Card);
        void shuffle();
        void print();
};

#endif // DECK
