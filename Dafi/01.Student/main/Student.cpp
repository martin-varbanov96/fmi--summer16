#include "Student.h"
#include <iostream>


using namespace std;

void Student::init(){

    cin.ignore();
    cout << "Enter Student's first name = ";
    cin.getline(firstName, sizeof(firstName));

    cout << "Enter Student's second name = ";
    cin.getline(lastName, sizeof(lastName));

    cout << "Enter Student's fn  = ";
    cin >> fn;

    subjectCounter = 0;
    /*
    for(int i = 0; i < 20; i++){
        subjectID[i] = 0;
    }
    */
}

/*
void Student::getGrade(Subject thisSubject){
    if(thisSubject.grade > 2){
        subjectID[thisSubject.subjectID] = thisSubject.grade;
   }
}
*/

void Student::addSubj(Subject& thisSubject){
    subjects[subjectCounter] = thisSubject;
    subjects[subjectCounter].print();
    subjectCounter++;
}

void Student::print(){
    cout << "Student's name is: " << firstName << "  " << lastName << endl;
    cout << "Student's fn is: " << fn << endl;

}
