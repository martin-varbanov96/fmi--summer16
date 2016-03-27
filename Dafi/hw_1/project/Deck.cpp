#include "Deck.h"
#include "Card.h"
#include <iostream>
using namespace std;

Deck::Deck(){
    this->idTop = 0;
    int i = 0;
/*
    while(i < 52){
        for(int j = 1; j <= 15; j++){
            for(int k = 1; k <= 4; k++){
                this->arr[i].setSuit(k);
                this->arr[i].setValue(j);
            }
        }
    }
*/
}

void Deck::print(){
    for(int i = 0; i < 52; i++){
        arr[i].print();
    }
}
