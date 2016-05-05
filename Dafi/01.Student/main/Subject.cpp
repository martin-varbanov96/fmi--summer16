#include "Subject.h"
#include <iostream>

using namespace std;

void Subject::init(){

    cin.ignore();
    cout << "Teacher's name = ";
    cin.getline(subjectTeacherName, sizeof(subjectTeacherName));

    cout << "Subject name = ";
    cin.getline(name, sizeof(name));

    cout << "Grade is  = ";
    cin >> grade;

    cout << "Subject ID: ";
    cin >> subjectID;

    cout << "Credits given = ";
    cin >> credits;

}

void Subject::print(){
    cout << endl;
    cout << "Subject name is: " << name << endl;
    cout << "Grade is equal to: " << grade << endl;
    cout << "Credits given: " << credits << endl;
    cout << "Teacher's name is " << subjectTeacherName << endl;
    cout << "Subject ID: " << subjectID << endl << endl;
}




