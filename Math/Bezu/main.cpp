#include <iostream>

using namespace std;


int getD(int a, int b){
    int max = 1;
    int smaller;
    if(a <= b){
        smaller = a;
    }else{
        smaller = b;
    }
    for(int i = 2; i <= smaller; i++){
        if( (a%i == 0) && (b%i == 0) ){
            max = i;
        }
    }
    return max;
}

void printBezu(double a, double b, double d){
    int sum;
    for(int u = -3000; u <= a; u++ ){
        for(int v = -3000; v <= b; v++){
            sum = (u*a) + (v*b);
            if(sum == d){
                cout << d << " = " << a << " * " << u << " + " << b << " * " << v << endl;
            }
        }
    }
}

int main()
{
    cout << "Enter a =  ";
    int a;
    cin >> a;
    cout << "Enter b = ";
    int b;
    cin >> b;
    int d = getD(a, b);
    printBezu(a, b ,d);
}
