#include "Knijka.h"
#include <cstring>

Knijka::Knijka(int numb, const char* title, const char* author)
    :number(numb){

    this->title = new char[strlen(title) + 1];
    strcpy(this->title, title);

    this->author = new char[strlen(author) + 1];
    strcpy(this->author, author);
}
Knijka::Knijka(const Knijka& temp)
    : title(NULL), author(NULL), number(temp.number)
{
    setTitle(temp.title);
    setAuthor(temp.author);
}

Knijka::~Knijka(){
    delete[] this->author;
    delete[] this->title;
}
int Knijka::getNumber(){
    return this->number;
}
const char* Knijka::getAuthor(){
    return this->author;
}
const char* Knijka::getTitle(){
    return this->title;
}

void Knijka::setNumber(int temp){
    number = temp;
}
void Knijka::setAuthor(const char* temp){
    delete[] this->author;

    this->author = new char[strlen(temp) + 1];
    strcpy(this->author,temp);
}
void Knijka::setTitle(const char* temp){
    delete[] this->title;
    this->title = new char[strlen(temp) + 1];
    strcpy(this->title, temp);
}
Knijka& Knijka::operator = (const Knijka& other){
    if(this == &other){
        return *this;
    }
    setNumber(other.number);
    setTitle(other.title);
    setAuthor(other.author);
}




