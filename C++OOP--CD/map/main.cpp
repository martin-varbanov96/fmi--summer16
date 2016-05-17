#include <iostream>
using namespace std;

template<typename T>
using Comparator = bool(*)(T, T);

bool compare_func(int a, int b) { return a < b; }

template<typename T>
void theHell(T arr[], int len, Comparator<T> comp){

for(int i = 0; i < len - 1; i++){
    if(comp(arr[i], arr[i+1])){
        cout << arr[i] << " < " <<arr[i+1] << endl;
        }
    }
}

int main(){
    int arr[] = { 1, 3 ,3 ,4, 4, 67, 5, 32, 4};
    Comparator<int> comp = compare_func;
    int len = sizeof(arr)/sizeof(int);;
    theHell(arr, len, comp);
    return 0;
}
