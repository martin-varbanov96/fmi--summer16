#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream textFile("textFile.txt");
    if(textFile.is_open()){
        cout << "file open..";
    }
    textFile.close();

    if(textFile.is_open()){
        cout << "THIS SHOULDN'T BE PRINTED !!!";
    }
    return 0;
}
