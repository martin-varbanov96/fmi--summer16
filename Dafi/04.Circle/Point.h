#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point{
    public:
        Point();
        Point(double, double);
        Point(const Point&);
        double getX() const;
        double getY() const;

        void setX(double);
        void setY(double);

        Point& operator += (const Point&);

        void print() const;
    private:
        double x;
        double y;
};

#endif // POINT_H


