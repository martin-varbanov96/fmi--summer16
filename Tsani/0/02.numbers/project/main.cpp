#include <iostream>
/*
Дадени са две числа, даден е броят на цифрите им. Да се провери дали имат еднакви съставни числа.
*/
using namespace std;

bool isEqual(int a, int b, int sizeA, int sizeB){
    int count = 0;
    int tempB;
    int bCONST = b;
    int tempA;
    for(int i = 0; i < sizeA; i++ ){
        tempA = a % 10;
        a /= 10;
        for(int j = 0; j < sizeB; j++){
            tempB = b % 10;
            b /= 10;
            if(tempA == tempB){
                count++;
            }
        }
        if( count < 1){
            return false;
        }
        b = bCONST;
        count = 0;
    }
    return true;
}

int main()
{
    int a, b, aSize, bSize;
    cout << "Enter a= ";
    cin >> a;
    cout << "Enter a's length= ";
    cin >> aSize;

    cout << "Enter b= ";
    cin >> b;
    cout << "Enter b's length= ";
    cin >> bSize;


    cout << isEqual(a, b, aSize, bSize);

}
