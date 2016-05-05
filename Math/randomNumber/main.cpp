#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int randomVar;
    cout << "Random from 0 - 100" << endl;
    for(int i = 0 ; i < 50; i++){
        randomVar = rand() % 100;
        cout << randomVar << endl;
    }

    cout << "Random from 30 - 67: " << endl;
    for(int i = 0 ; i < 500; i++){
        randomVar = rand() % 37 + 30;
        if(randomVar > 67){
            cout << randomVar;
        }
    }

}
