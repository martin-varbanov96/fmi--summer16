#include <iostream>
#include "Note.h"
using namespace std;

void menu(){
    int i;
    bool yn;
    cout << "THIS IS MENU !!!!";
    cout << " 1. New Note";
    cout << "\n" ;
    cin >> i;


            Note a(3, "adsada", "adsdas", "adsad");
            a.print() ;
    switch(i){
        case 1:
            break;
        default:
            cout << "No such answer";
            break;
    }
    cout << "Enter sth else ?";
    cin >> yn;
    if(yn){
        menu();
    }

}


int main()
{

    menu();
    return 0;
}
