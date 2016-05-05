#include <iostream>

/*
    Every number can be represented with a multiplication of prime numbers.
*/
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

void printTeorem(int a ){
    int arr[50];
    int arrCounter = 0;
    for(int i = 0; i <= a; i++){
        if(isPrime(i)){
            while(a%i == 0){
                a /= i;
                arr[arrCounter] = i;
                arrCounter++;
                if(a == 1){
                    cout << "Your number is equal to: ";
                    for(int j = 0; j < arrCounter; j++){
                        cout << arr[j] << " * " ;
                    }
                    cout << " 1 " << endl;
                }
            }
        }
    }
}


void menu(){
    int a;
    cout << "Enter number= ";
    cin >> a;
    printTeorem(a);
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
