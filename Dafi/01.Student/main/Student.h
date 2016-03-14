#include "Subject.h"
struct Student{
    unsigned fn;
    char firstName[20];
    char lastName[20];
    int subjectID[20];

    void init();
    void print();

    void getGrade(Subject thisSubject);
};
