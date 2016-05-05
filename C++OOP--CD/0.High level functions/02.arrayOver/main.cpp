#include <iostream>
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))

/*
2зад. Да се напише функция
от по-висок ред, която прилага реална едноаргументна функция f над всеки елемент на едномерен масив.
*/

using namespace std;

int coverArr(int *element){
    cout << element;
    coverArr(++element);
}


int main()
{
    int* a = new int[123];
    for(int i = 0; i < 5; i++){
        a[i] = i;
    }
    int len = ARRAY_SIZE(a);
    cout << len;
    //coverArr(a);

}
