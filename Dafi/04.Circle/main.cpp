#include <iostream>
#include "Point.h"

using namespace std;

int main()
{

    Point a;
    a.setX(5);
    a.setY(10);

    Point b;

    a.print();

    b.print();

    return 0;
}
