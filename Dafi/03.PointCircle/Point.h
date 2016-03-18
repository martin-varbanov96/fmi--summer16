
#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point{
    public:
        Point();
        void setX(double);
        void setY(double);
        double getX() const;
        double getY() const;
        void print() const;
        Point& operator + (const Point&);
    private:
        double x;
        double y;
};

#endif // POINT_H
