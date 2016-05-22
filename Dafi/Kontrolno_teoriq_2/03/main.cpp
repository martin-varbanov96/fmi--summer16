#include <iostream>

using namespace std;
class Point{
public:
    Point(float = 0.0, float = 0.0);
    ~Point();
protected:
    float x,y;
};
Point::Point(float a, float b){
    x = a;
    y = b;
    cout << "konstr za Point"  << '[' << x << "," << y << ']' << endl;
}
Point::~Point(){
    cout << "destr za Point"  << '[' << x << "," << y << ']' << endl;
}

class Circle : public Point{
public:
    Circle(float r =0.0, float x = 0.0, float y = 0.0);
    ~Circle();
private:
    float radius;
};

Circle::Circle(float r, float a, float b)
                : Point(a, b){
    radius = r;
    cout << "konstr za Circle " << radius << '[' << a << "," << y << ']' << endl;
}
Circle::~Circle(){
    cout << "Destr za Cricle" << radius << '[' << x << ", " << y << ']' << endl;
}

int main()
{
    Point p(1.1, 2.2);
    Circle circle1(4.5, 7.2, 2.9);
    Circle circle2(10, 5, 5);
    return 0;
}
/*
konstr za Point[1.1,2.2]
konstr za Point[7.2,2.9]
konstr za Circle 4.5[7.2,2.9]
konstr za Point[5,5]
konstr za Circle 10[5,5]
Destr za Cricle10[5, 5]
destr za Point[5,5]
Destr za Cricle4.5[7.2, 2.9]
destr za Point[7.2,2.9]
destr za Point[1.1,2.2]

������ �� �������� �, �� ����� �� ����������� �� ������������� � �������������� �� ���� �� ����������� �� ��������������. �����,
��� ��� ������������ ��������� 1, 2, 3, ������������� �� ��������� � ������� ��� -> 3, 2, 1

������ ��������� �� ���� ����� � ��������� 1.1 � 2.2, ���������� konstr za Point[1.1,2.2]. �������������� ������������ �� Cirle,
� ���������������� ������ ��������� ����������� �� Point, printirame konstr za Point[7.2,2.9], i tn ....
,

*/
