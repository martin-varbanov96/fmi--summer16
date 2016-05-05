#include "Point.h"

Point::Point(double newX, double newY){
    x = newX;
    y = newY;
}
double Point::getX() const{
    return x;
}
double Point::getY() const{
    return y;
}
void Point::setY(double newY){
    this->y = newY;
}
void Point::setX(double newX){
    this->x = newX;
}
void Point::print() const{
    cout << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
/*

double Point::getDistance(double x1, double y1, double x2, double y2){
    return x1*x2 + y1*y2;
}
*/


