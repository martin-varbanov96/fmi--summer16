#include <iostream>
/*
- name
-age
-egn
и Student
- Person
- group
- fn
*/
using namespace std;

struct Person{
    string name;
    int age;
    int egn;
};

void initPerson(Person &thisPerson, string currentName, int currentAge, int currentEgn){
    thisPerson.name = currentName;
    thisPerson.age = currentAge;
    thisPerson.egn = currentEgn;
}
void printPersonInfo(Person &thisPerson){
    cout << thisPerson.name << " is " << thisPerson.age << " years old and his EGN is " << thisPerson.egn;
}

struct Student{
    Person person;
    string group;
    int fn;
};

void initStudent(Student &thisStudent, Person thisPerson, string thisGroup, int thisFn){
    thisStudent.person = thisPerson;
    thisStudent.group = thisGroup;
    thisStudent.fn = thisFn;
}

void printStudentInfo(Student &thisStudent){
    printPersonInfo(thisStudent.person);
    cout << ", Student in " << thisStudent.group << " group and fn = " << thisStudent.fn;
}

int main()
{
    Person pesho;
    initPerson(pesho, "Pesho", 20, 9502124343);

    Student peshoStudent;
    initStudent(peshoStudent, pesho, "Statistics", 165);
    printStudentInfo(peshoStudent);
}
