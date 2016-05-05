#include "Subject.h"

struct Student{
    unsigned fn;
    char firstName[20];
    char lastName[20];
  //  int subjectID[20];
    Subject subjects[20];
    unsigned subjectCounter;

    void addSubj(Subject& subject);
    void init();
    void print();

    void getGrade(Subject thisSubject);
};
