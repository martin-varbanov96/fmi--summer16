#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point{
    public:
        Point();
        Point(double, double);
        double getX() const;
        double getY() const;

        void setX(double);
        void setY(double);

        void print() const;
    private:
        double x;
        double y;
};

#endif // POINT_H

