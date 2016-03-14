#include "Student.h"
#include <iostream>


using namespace std;

int main()
{


    Subject a;
    a.init();
    a.print();


    Student b;
    b.init();
    b.getGrade(a);
    b.print();


}
