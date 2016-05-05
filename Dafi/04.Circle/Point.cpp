#include "Point.h"

Point::Point(){
    this->x = 0;
    y = 0;
}
Point::Point(const Point& temp){
    x = temp.x;
    y = temp.y;
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
    cout << " ( " << x << " , " << y << " ) " << endl;
}
Point& Point::operator+=(const Point& temp){
    x += temp.getX();
    y += temp.getY();
    return *this;
}


