#include <iostream>
#include "Point.h"
#include "Circle.h"

using namespace std;

int main()
{

    Circle a;

    Point o(a.getO());
    Point r(a.getR());

    r.setX(3);
    r.setY(1);

    o.setX(4);
    o.setY(4);

    a.setO(o);
    a.setR(r);

    Point points[10];


    cout << a.getRvec() << endl;

    cout << a.getSize() << endl;

}
