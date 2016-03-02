#include <iostream>
/*
1зад. Дадени са едноаргументната функция
f и целочислен интервал [a,b]. Да се дефинира функция, която намира най-голямата стойност на f в [a,b].
*/

using namespace std;


int findBiggest(int a, int b, int (*f)(int)){
    int max = f(a);
    for(int i = a +1; i <= b; i++){
        if(max < f(i)){
            max = f(i);
        }
    }
    return max;

}

int func(int a){
    return a - 3 /(a*a) + 2;
}

int main()
{
    cout << "Max is= " <<findBiggest(3, 6, func);
}
