#include <iostream>

using namespace std;



int main()
{
    int arr[5] = {1, 3, 4, 5, 2};
    int n = 5;

    cout <<"First element = " << *arr << endl;
    cout << "Second element = " << *(arr+1) << endl;
    cout << "First element + 1 = " <<   ++*(arr) << endl;
    cout << "Last element = " <<*(arr + (n - 1)) << endl << endl;

    cout << "All elements" << endl;
    for(int i = 0; i < n; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
