#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
    Point a;
    a.setX(5);
    a.setY(12);
    a.print();

    a.setX(123);
    a.setY(321);
    cout << a.getX() << endl;
    a.print();

    Point b(2, 3);
    b.print();
}
