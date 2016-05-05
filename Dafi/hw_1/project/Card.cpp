#include "Card.h"
#include <iostream>
#include <ctime>
/* srand example */
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

char spade[] = "\xe2\x99\xa4";
char heart[] = "\xe2\x99\xa5";
char diamond[] = "\xe2\x99\xa6";
char club[] = "\xe2\x99\xa7";

int getRandom(int start, int finish){
    srand(time(0));
    return rand()  % (finish - start ) + start;
}
char getValueChar(int val){
    switch(val){
        case 11: return 'J';
        case 12: return 'Q';
        case 13: return 'K';
        case 14: return 'A';
        case 15: return 'S';
        default: return val;
    }

}

Card::Card(int tempVal, int tempSuit){
    value = tempVal;
    suit = tempSuit;
    valueImg = getValueChar(value);
}
Card::Card(int& tempVal, int& tempSuit){
    value = tempVal;
    suit = tempSuit;
    valueImg = getValueChar(value);
}
Card::Card(){
    value = getRandom(1, 15);
    suit = getRandom(1, 4);
    valueImg = getValueChar(value);
}
Card::Card(const Card& otherCard){
    this->value = otherCard.getValue();
    this->suit = otherCard.getSuit();
    this->valueImg = otherCard.getValueImg();
}

int Card::getValue() const {
    return this->value;
}
int Card::getSuit() const{
    return this->suit;
}
char Card::getValueImg() const {
    return this->valueImg;
}
void Card::setValue(int val){
    this->value = val;
}
void Card::setSuit(int tempSuit){
    this->suit = tempSuit;
}
void Card::setValueImg(int temp){
    this->valueImg = getValueChar(value);
}
void Card::setValueImg(char temp){
    this->valueImg = temp;
}

void Card::print(){
    cout << "Value is = ";
    if(value < 11){
        cout << value;
    }else{
        cout << valueImg;
    }
    cout <<  " and suit is = ";
    if(suit == 1){
        cout << club;
    }else if(suit == 2){
        cout << diamond;
    }else if(suit == 3){
        cout << heart;
    }else{
        cout << spade;
    }
    cout << endl;
}
bool Card::isEqual (const Card& otherCard) const{
    return (this->getValue() == otherCard.getValue() && this->getSuit() == otherCard.getSuit());
}

