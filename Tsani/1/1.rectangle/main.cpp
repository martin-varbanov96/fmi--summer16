#include <iostream>
#include <cmath>

using namespace std;

struct rectangle{
    int a = 0;
    int b = 0;
};


void init(rectangle &thisRect, int a, int b){
    thisRect.a = a;
    thisRect.b = b;
}

void print(rectangle &thisRect){
    cout << "a = " << thisRect.a << " and b = " << thisRect.b << endl;
}

int getP(rectangle &thisRect){
    return (thisRect.a * 2) + (thisRect.b * 2 );
}

int getS(rectangle &thisRect){
    return thisRect.a * thisRect.b;
}

int getDiagonal(rectangle &thisRect){
    return sqrt((thisRect.a * thisRect.a) + (thisRect.a * thisRect.a));
}
int main()
{
    rectangle rect;
    int a;
    int b;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b =";
    cin >> b;
    init(rect, a, b);
    print(rect);
    cout << "S = " << getS(rect) << endl;
    cout << "P = " << getP(rect) << endl;
    cout << "Diagonl = " << getDiagonal(rect) << endl;
}
