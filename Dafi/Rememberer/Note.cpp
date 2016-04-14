#include "Note.h"
#include "string.h"
#include <iostream>
using namespace std;

Note::Note(int prior, char* tit, char* mes, char* cat)
:priority(prior), title(NULL), message(NULL), category(NULL){
    title = new char[strlen(tit)];
    message = new char[strlen(mes)];
    category = new char[strlen(cat)];
}
Note::~Note(){
    delete[] title;
    delete[] message;
    delete[] category;
}


void Note::print() const{
    cout << " title is = " << this->title;
    cout << " message is = " << this->message;
    cout << " category is =  " << this->category;
    cout << " priority is = " << this->priority;
}
