#ifndef STU_H
#define STUD_H
#include "Person.h"

class Student : public Person{
private:
    int grades;
    char* number;
public:
    Student(int =  2, char* = "", const Date& = Date(), char* = "");
    ~Student();
    Student(const Student&);
    Student& operator=(const Student&);

    void print() const;

    int getGrades();
    char* getNumber();

    void setGrades(int);
    void setNumber(char*);
};
#endif // STU_H
