#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point{
    public:
        Point(double = 0, double = 0);

        void setX(double);
        void setY(double);
        double getX() const;
        double getY() const;
        void print() const;
    private:
        double x;
        double y;
//        double getDistance(double, double, double, double);
};
//std::ostream& operator << (std::ostream&, const Point&)


#endif // POINT_H

