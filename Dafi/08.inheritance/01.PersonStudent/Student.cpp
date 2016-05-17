#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(int gradesTemp, char* fnTemp, const Date& birthDay, char* nameTemp)
    :Person(nameTemp, birthDay), grades(gradesTemp), number(fnTemp){}

Student::Student(const Student& tempObj)
    :grades(tempObj.grades), number(tempObj.number){}

Student::~Student(){
	delete[] this->number;
}

Student& Student:: operator = (const Student& tmpObj)
{
    if(this != &tmpObj){
        this->setGrades(tmpObj.grades);
        this->setNumber(tmpObj.number);
    }

    return *this;
}

void Student::setGrades(int  grades){
    this->grades = grades;
}
void Student::setNumber(char* num){
    this->number = num;
}

void Student::print() const
{
    Person::print();

	cout << "Number: " << this->number << endl;
	cout << "Grades: " << this->grades << endl;
}
