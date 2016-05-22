#include <iostream>

using namespace std;
class A{
public:
    A(int nValue){
        cout << "A: " << nValue << endl;
    }
};
class B: public A{
public:
    B(int nValue, double dValue)
        :A(nValue){
            cout << "B: " << dValue << endl;
        }
};
class C: public B{
public:
    C(int nValue, double dValue, char chValue)
        :B(nValue, dValue){
            cout << "C: " << chValue << endl;
        }
};
int main()
{
    C cClass(5, 4.3, 'R');
    return 0;
}
/*
A: 5
B: 4.3
C: R

Инициализираме клас С с аргументи 5, 4.3, 'Я', след това в инициализиращият списък извикваме конструктора на клас Б с
 аргументи (5, 4.3),
в който клас Б, в инициализиращия списък инициализирам конструктова на клас А с аргумент 5 и принтираме  А: 5, след това се
връщаме в конструктора на клас Б и принтираме Б: 4.3, връщаме се в конструктора на клас С и принтираме С: 'Я', излизаме от
конструктора и терминираме програмата
*/
