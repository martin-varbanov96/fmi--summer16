#ifndef DECK
#define DECK
#include "Card.h"
class Deck{
    private:
        Card arr[54];
        int idTop;
    public:
        void setTop(int);
        void setArr(int, int, int);

        Card getArr(int);
        int getTop();

        Deck();
        bool isEmpty() const;
        Card pop();
        void push(Card);
        void shuffle();
        void print();
};

#endif // DECK
