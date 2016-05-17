#ifndef PER_H
#define PER_H
#include "Date.h"
class Person{
private:
    char* name;
    Date birthDate;
public:
    Person(char* = "Gosho", Date = Date() );
    Person(const Person&);
    ~Person();
    Person& operator = (const Person&);

    void setName( char*);
    void SetDate( Date&);

    char* getName() const;
    Date& getDate() const;
    void print() const;
};

#endif // PER_H
