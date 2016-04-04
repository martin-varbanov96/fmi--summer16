#include "Account.h"
#include <assert.h>     /* assert */
#include <string.h>
#include <iostream>
using namespace std;

Account::Account(char* acc = "acc", char* pass = "pass", int priv = 2){
    int isLet = 0;
    int isNum = 0;
    int sizePass = strlen(pass);
    for(int i = 0; i < sizePass; i++){
        if((pass[i] >= 48 && pass[i] <= 57) && isNum == 0){
            isNum++;
        }
        if(((pass[i] >= 65 && pass[i] <= 90) || (pass[i] >= 97 && pass[i] <= 122)) && isLet == 0){
            isLet++;
        }
    }
    assert(priv <= 3 && priv >= 1 && isLet > 0 && isNum > 0);
    name = acc;
    password = pass;
    lvlOfPriv = priv;
}

void Account::print() const{
    cout << " Name is = " << this-> name << " Password is = " << this->password << " privelege = " << this->lvlOfPriv << endl;
}


bool Account::correctPassword(char* pass) {
    int isLet = 0;
    int isNum = 0;
    int sizePass = strlen(pass);
    for(int i = 0; i < sizePass; i++){
        if((pass[i] >= 48 && pass[i] <= 57) && isNum == 0){
            isNum++;
        }
        if(((pass[i] >= 65 && pass[i] <= 90) || (pass[i] >= 97 && pass[i] <= 122)) && isLet == 0){
            isLet++;
        }
    }
    return (isLet > 0 && isNum > 0);
}
