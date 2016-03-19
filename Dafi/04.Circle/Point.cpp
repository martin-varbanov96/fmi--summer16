


#include "Point.h"

Point::Point(){
    this->x = 0;
    y = 0;
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

