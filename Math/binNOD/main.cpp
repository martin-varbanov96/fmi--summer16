#include <iostream>
#include <cmath>

using namespace std;

void printGCD(int a, int b){
    int d = 0;
    while( (a%2 == 0) && (b % 2 == 0) ){
        a/= 2;
        b/= 2;
        d += 1;
    }
    while(a != b){
        if(a % 2 == 0){
            a /= 2;
        }else if( b % 2 == 0){
            b /= 2;
        }else if( a > b ){
            a = (a-b)/2;
        }else{
            b = (b-a)/2;
        }
    }
    int g = a;
    cout << "d = " << g << " and d = " << d << endl;
    cout << "GCD = " << g*pow(2, d) << endl;
}


int main()
{
    int a;
    cout << "Enter a= ";
    cin >> a;

    int b;
    cout << "Enter b= ";
    cin >> b;

    printGCD(a, b);
}
