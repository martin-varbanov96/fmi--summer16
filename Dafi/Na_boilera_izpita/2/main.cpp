#include <iostream>

/*
func 2 не може да се достъпе

*/


using namespace std;
class Base{
public:
    virtual void func1(){
        cout << "func1() \n";
    }
    void help(){
        cout << "help() \n";
        func2();
        func1();
        func3();
    }
protected:
    virtual void func3(){
        cout << "fuc3() \n";
    }
    virtual void func2(){
        cout << "func2() \n";
    }
};

class Der: public Base{
    virtual void func1(){
        cout << "Der-class \n";
    }
protected:
    virtual void func2(){
     cout <<   "Der-func2() \n";
    }
public:
    virtual void func3(){
        cout << "Der-func3() \n";
    }
};

int main()
{
    Base b;
    Der d;
    Base *p = &b;
    b.func1();
    p->func1();
    p->func2();
    p->func3();
    Base *q = &d;
    q->func1();
    q->func2();
    q->func3();
    p->Base::func1();
    Der *r = new Der;
    r->func2();
    r->func1();
    r->func3();
    p->help();
    q->help();
    r->help();
}
