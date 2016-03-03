#include <iostream>
#include <cmath>

using namespace std;

struct rectangle{
    int a = 0;
    int b = 0;
    int getS(int a, int b){
        return a*b;
    }
    int getP(int a, int b){
        return a + a + b + b;
    }
    double getDiagonal( int a,  int b){
        return sqrt((a*a) + (b*b));
    }
};

int main()
{
    rectangle rect;
    rect.a = 3;
    rect.b = 4;
    cout << "a = " << rect.a << " and b = " << rect.b << endl;
    cout << "S = " << rect.getS(rect.a, rect.b) << endl;
    cout << "P = " << rect.getP(rect.a, rect.b) << endl;
    cout << "Diagonl = " << rect.getDiagonal(rect.a, rect.b) << endl;
}
