#include <iostream>

using namespace std;
struct CN{
    char character;
    CN* next;
}*first, cn;
void list(char *word){
    cn.character = *word;
    cn.next = first;
    first = new CN;
    *first = cn;
    if(*word){
        list(word+1);
    }
}
void print(CN *first){
    if(!first){
        cout << "\n result = ";
        return;
    }else{
        print(first->next);
        cout << first->character;
        return;
    }
}
int main()
{
    first = NULL;
    list("droll");
    print(first->next->next);
    return 0;
}
/*

 result = drol


*/
