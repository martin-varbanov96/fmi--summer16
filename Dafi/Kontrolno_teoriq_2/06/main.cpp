#include <iostream>

using namespace std;
struct student{
    long nomer;
    float sr_uspeh;
    student *next;
};
void search(student *first, long key, float value){
    student *ptr = first;
    while(ptr){
        if(ptr->nomer == key){
            break;//remember
        }else{
            ptr = ptr->next; //remember
        }
        if(ptr){
            sr_uspeh = value;
        }else{
            cout <<"\n nqma elm. s takuv kluch" << endl;
        }
    }
}
int main()
{
    student
    return 0;
}
