#include "Point.h"
    double Point::getX(){
        return x;
    }
    double Point::getY(){
        return y;
    }
    void Point::setY(double newY){
        this->y = newY;
    }
    void Point::setX(double newX){
        this->x = newX;
    }
    void Point::print(){
        cout << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
