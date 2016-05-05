#include <iostream>

using namespace std;


bool isPrime(int num){
    if(num <= 1){
        return false;
    }else if( num <= 3){
        return true;
    }else if(num % 2 ==0 || num % 3 == 0){
        return false;
    }
    int i = 5;
    while(i * i <= num){
        if(num % i == 0 || num % i + 2 == 0){
            return false;
        }
        i += 6;
    }
    return true;
}

bool isCoPrime(int n, int i){
    int smaller;
    if(n <= i){
        smaller = n;
    }else{
        smaller = i;
    }
    for(int j = 2; j <= smaller; j++){
        if( ( n%j == 0 ) && ( i % j ==0 )  ){
            return false;
        }
    }
    return true;
}

int eulerNumber(int n){
    if(isPrime(n)){
        return n - 1;
    }
    int count = 1;
    for(int i = 2; i <= n; i++){
        if(isCoPrime(n, i)){
            count += 1;
        }
    }
    return count;
}
void menu(){
    int a;
    cout << "Enter number= ";
    cin >> a;
    cout << eulerNumber(a) << endl;
    cout << "Want to try with another number ? [y/n]";
    char result;
    cin >> result;
    if(result == 'y'){
        menu();
    }
}

int main()
{
    menu();
}
