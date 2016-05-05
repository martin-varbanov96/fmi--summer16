#include "Student.h"

#include <iostream>

using namespace std;

void Student::read(){

    cout << "Enter Student name = ";
    cin >> name;

    cout  << "Enter fn number = ";
    cin >> fn;

    countSubj = 0;
}

void Student::print(){
    cout << "Student's nuumber " << name << endl;
    cout << "Student's fn  = " << fn << endl;
    cout << "grades = " << endl;

    for(subject* currSubj = allSubjects; currSubj < allSubjects + countSubj; currSubj++){
        currSubj -> print();
    }
}

bool Student::isPassed(const char* grades){

}


