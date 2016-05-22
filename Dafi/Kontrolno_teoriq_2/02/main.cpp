#include <iostream>
using namespace std;
class PoweredDevice{
public:
    PoweredDevice(int nPower){
            cout << "PoweredDevice" << nPower << endl;
    }
};
class Scanner: virtual public PoweredDevice{
public:
    Scanner(int nScanner, int nPower)
        :PoweredDevice(nPower){
            cout << "Scanner" << nScanner << endl;
    }
};
class Printer : virtual public PoweredDevice{
public:
    Printer(int nPrinter, int nPower)
        :PoweredDevice(nPower){
            cout << "Printer: " << nPrinter << endl;
    }
};
class Copier : public Scanner, public Printer{
public:
    Copier(int nScanner, int nPrinter, int nPower)
        :Scanner(nScanner, nPower),
        Printer(nPrinter, nPower),
        PoweredDevice(nPower){

    }
};
int main()
{
    Copier hable(1, 2, 3);
    return 0;
}
/*
PoweredDevice3
Scanner1
Printer: 2

    ideqta na zadachata e, che kogato imame nasledqvane v poveche ot edin class,


    suzdavame instanciq na klasa Copier s argumenti 1, 2, 3. от инициализиращият списък на класа Copier влизаме в конструктора
    PoweredDevice(nPower), и принтираме Powered Device 3. инстанцията на класа се унищожава и отиваме в конструктора Scanner,
*/
