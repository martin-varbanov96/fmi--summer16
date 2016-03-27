#include "Deck.h"
#include "Card.h"
#include <iostream>
using namespace std;
int DECK_CONST = 54;

Deck::Deck(){
    int i = 0;
    for(int j = 2; j < 16; j++){
        if(i < DECK_CONST){
            for(int k = 1; k <= 4; k++){
                this->setArr(i, j, k);
                i++;
            }
        }
    this->idTop = DECK_CONST;

    }
}
void Deck::push(Card temp){
    this->arr[++idTop].setValue(temp.getValue());
    this->arr[idTop].setSuit(temp.getSuit());
    this->arr[idTop].setValueImg(temp.getValueImg());

}
Card Deck::pop(){
    return this->arr[idTop--];
}
void Deck::setArr(int i, int j, int k){
    this->arr[i].setValue(j);
    this->arr[i].setSuit(k);
    this->arr[i].setValueImg(arr[i].getValue());
}
bool Deck::isEmpty() const{
    if(this->idTop < 0){
        return false;
    }else{
        return true;
    }
};

void Deck::setTop(int i){
    this->idTop = i;
}
void Deck::shuffle(){
    int tempArr[DECK_CONST];
    //TODO::

}
Card Deck::getArr(int i){
    return this->arr[i];
}
int Deck::getTop(){
    return this->idTop;
}

void Deck::print(){
    for(int i = 0; i < DECK_CONST; i++){
        arr[i].print();
    }
}
