#include <iostream>
#include <math.h>

using namespace std;



struct CoordinateSystem{
    int x = 0;
    int y;
    void printPosition(){
        cout << "We are at(" << x << "," << y << ")" << endl;
    }
    void printPosition2();
};

double dist(CoordinateSystem a, CoordinateSystem b){
    return sqrt( ( (a.x - b.x)*(a.x - b.x) ) + ( (a.y -b.y)*(a.y - b.y) ) );
}

void CoordinateSystem::printPosition2(){
    cout << "We are at(" << x << "," << y << ")" << endl;
}

int main()
{
    CoordinateSystem cs;
    cout << cs.x << endl;
    cs.y = 0;
    cs.printPosition();

    CoordinateSystem cs2;
    cs2.y = 5;
    cs2.printPosition2();

    cout << dist(cs, cs2) << endl;

}
