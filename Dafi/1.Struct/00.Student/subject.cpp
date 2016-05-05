#include "subject.h"
#include <iostream>

using namespace std;

void subject::read(){
    cout << "Enter name = ";
    cin.getline(name, sizeof(name));

    cout  << "Enter grade = ";
    cin >> grade;
}

void subject::print(){
    cout << "Student name is = " << name << endl;
    cout << "Student grade is = " << grade << endl;
}


