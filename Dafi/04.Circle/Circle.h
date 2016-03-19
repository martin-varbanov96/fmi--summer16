#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include <iostream>
using namespace std;

class Circle{
    public:
        Circle();
        Circle(Point, Point);

        void setO(const Point&);
        void setR(const Point&);
        void print() const;

        Point getO();
        Point getR();
        double getRvec();
        double getSize();
        double isCrossing(Point);//es is hard
    private:
        Point oPoint;
        Point rPoint;

};
#endif
