#include "Student.h"
#include <iostream>


using namespace std;

void Student::init(){

    cin.getline();

    cout << "Enter Student's first name = ";
    cin.getline(firstName, sizeof(firstName));

    cout << "Enter Student's second name = ";
    cin.getline(lastName, sizeof(lastName));

    cout << "Enter Student's fn  = ";
    cin >> fn;

}

void Student::getGrade(Subject thisSubject){
    if(thisSubject.grade >= 2){
        cout << "win!!";
    }
}

void Student::print(){
    cout << "Student's name is: " << firstName << "  " << lastName << endl;
    cout << "Student's fn is: " << fn << endl;
    for(int i = 0; i < 20; i++){
        if(subjectID[i] == 1){
            cout << "Student passed in TODO" << endl;
        }
    }

}
