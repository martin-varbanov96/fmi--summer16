#include "subject.h"

struct Student{
    char name[20];
    unsigned fn;

    subject allSubjects[50];
    unsigned countSubj;

    bool isPassed(const char*);
    void read();
    void print();


};
