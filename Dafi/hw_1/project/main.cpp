#include <iostream>
#include "Card.h"

using namespace std;

int main()
{

     char spade[] = "\xe2\x99\xa4";
     char heart[] = "\xe2\x99\xa5";
     char diamond[] = "\xe2\x99\xa6";
     char club[] = "\xe2\x99\xa7";
    /*

    char temp[4] = "\xe2\x99\xa7";
    for(int i = 0; i < 4; i++){
        cout << temp[i] << endl;
    }
    */
    Card a;
    a.print();
    Card b(11, 3);
    b.print();
    cout << b.getValueImg() << endl;
    return 0;
}
