#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point{
    public:
        void setX(double);
        void setY(double);
        double getX();
        double getY();
        void print();
    private:
        double x;
        double y;
};

#endif // POINT_H

