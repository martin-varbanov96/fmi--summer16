#include <iostream>

using namespace std;

class Simple{
    public:
        Simple(){
            a = 5;
        }
        void setA(int aasd){
            this->a = aasd;
        }
        int getA(){
            return this->a;
        }
    private:
        int a;
};

int main()
{
    int* a =new int[50];
    delete[] a;
    Simple* b = new Simple[20];
    delete[] b;

    int n = 5;
    int m = 2;

    char** c = new char*[n];
    for(int i = 0; i < n; i++){
        c[i] = new char[m];
    }
    for(int i = 0; i < n; i++){
        delete[] c[i];
    }
    delete[] c;

    cout << "Hello world!" << endl;
    return 0;
}
