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
    b.print();

    Subject c;
    c.init();
    c.print();

    b.addSubj(a);
    b.addSubj(c);

}
