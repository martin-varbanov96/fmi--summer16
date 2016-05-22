#include <iostream>

using namespace std;
class A{
public:
    A(int nValue){
        cout << "A: " << nValue << endl;
    }
};
class B : public A{
public:
    B(int nValue, double dValue)
        :A(nValue){
        cout << "B: " <<  dValue << endl;
    }
};
class C: public B{
public:
    C(int nValue, double dValue, char chValue)
            :B(nValue, dValue){
                cout << "C: " <<  chValue << endl;
    }
};
int main()
{
    C c(5, 4.3, 'R');
    return 0;
}
/*
A: 5
B: 4.3
C: R
В main метода създаваме инстанция на клас С. Класът е родител на клас Б. В конструктора на С се инициализират аргументите 5;
4.3; 'Р'. В инициализиращият списък на класа се извиква конструктора на класа Б с аргументи 5 и 4.3. В инциализиращият списък
на класа Б се извиква конструктор на унаследения клас А, придават се като аргументи 5. В конструктора на А се принтира "А: 5",
връщаме се в конструктора на Б, в който се принтира "Б: 4.3", връщаме се в конструктора на С, в който се принтира "С: 'Р'.
Връщаме се в main метода. програмата се терминира. "
*/
