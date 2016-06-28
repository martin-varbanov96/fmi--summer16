#include <iostream>

using namespace std;

class KLAS{
private:
    int a,b;
public:
    KLAS(int =  0, int = 1);
    KLAS(const KLAS&);
    KLAS& operator =(const KLAS&);
    ~KLAS();
    void print() const;
};
KLAS::KLAS(int x, int y){
    a = x;
    b = y;
    cout << "KONSTRUKTOR" << endl;
}
KLAS::KLAS(const KLAS& r)
    :a(r.a+3), b(r.b+5){
        cout << "KONSTR ZA PRISVOQVANE" << endl;
}
KLAS& KLAS::operator=(const KLAS& p){
    cout << "OPERATOR =" << endl;
}

KLAS::~KLAS(){
    cout << "DESTR" << endl;
}
void KLAS::print() const{
    cout << a << " " << b << endl;
}

int main()
{
    KLAS a, b(2), c(3, 4), d(c);
    a.print();
    b.print();
    c.print();
    KLAS f = d;
    f.print();
    KLAS g = c;
    g.print();
    d = g;
    d.print();
    return 0;
}
