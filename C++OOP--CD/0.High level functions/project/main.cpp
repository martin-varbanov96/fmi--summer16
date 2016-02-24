#include <iostream>
#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))

/*
1зад. Дадени са едноаргументната функция
f и целочислен интервал [a,b]. Да се дефинира функция, която намира най-голямата стойност на f в [a,b].
*/

using namespace std;


int findBiggest(int a[], int length){
    int max = 0;
    for(int i = 0; i < length; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;

}

void (*f)((*findBiggest(int *result))){
    cout << result;
}


int main()
{
    int arr [20] = {1, 3, 2, 5, 12, 12312, 23};
    int len = ARRAY_SIZE(arr);
    cout << findBiggest(arr, len);
}
