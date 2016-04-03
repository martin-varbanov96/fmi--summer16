#include <iostream>

using namespace std;
template <class T>
T sum(T a, T b){
    return a + b;
}

int main()
{
    int ch = '5';
    char chx = '5';
    int dbl = 2.34;
    double dblh = 2.45;
    int inter = 3;
    int inter2 = 5;

    inter = sum(inter, inter2);
    cout << inter << endl;

    inter = sum(inter2, ch);
    cout << inter << endl;

    /*
    DOESN'T WORK
    inter = sum(inter2, chx);
    cout << inter << endl;
    */

    inter = sum(inter2, dbl);
    cout << inter << endl;

    /*
    DOESn't WORK !!!!!!1
    inter = sum(inter2, dblh);
    cout < inter << endl;
    */


}
