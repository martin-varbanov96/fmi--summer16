#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(char* nameTemp, Date dateTemp)
    :name(nameTemp), birthDate(dateTemp){}

Person::Person(const Person& tmpObj)
    :name(tmpObj.name), birthDate(tmpObj.birthDate){}

Person::~Person(){
    delete[] this->name;
}

Person& Person::operator = (const Person& tmpObj){
    if(this != &tmpObj){
        this->name = tmpObj.name;
        this->birthDate = tmpObj.birthDate;
    }
    return *this;
}
void Person::setName( char* tmpName){
    this->name = tmpName;
}
void Person::SetDate( Date& tmp){
    this->birthDate = tmp;
}
char* Person::getName() const{
    return this->name;
}
void Person::print() const{
    cout << "Name: " << this->getName() << endl;
    this->birthDate.print();
}







