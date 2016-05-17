#include <iostream>
#include "Date.h"
#include "Student.h"
#include "Person.h"

using namespace std;

int main()
{
    //Въпрос, защо не стига до reurn- на и гръми след ? Деструктор ?!?!?
    //Student pesho;
    Person gosho;
    gosho.print();

    Student misho;
    misho.print();



    return 0;
}
