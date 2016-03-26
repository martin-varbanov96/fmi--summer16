#include "Circle.h"
#include  <math.h>

Circle::Circle(){
    Point oPoint();
    Point rPoint();
}
Circle::~Circle(){

}
Point Circle::getO(){
    return oPoint;
}
Point Circle::getR(){
    return rPoint;
}
void Circle::setO(const Point& a){
    oPoint.setX(a.getX());
    oPoint.setY(a.getY());
}
void Circle::setR(const Point& a){
    rPoint.setX(a.getX());
    rPoint.setY(a.getY());
}
double Circle::getRvec(){
    oPoint.print();
    rPoint.print();
    return sqrt( pow((oPoint.getX() - rPoint.getX()), 2) + pow((oPoint.getY() - rPoint.getY()), 2)  );
}
double Circle::getSize(){
    return M_PI * getRvec() * getRvec();
}
void Circle::print() const{
    oPoint.print();
    rPoint.print();
}
