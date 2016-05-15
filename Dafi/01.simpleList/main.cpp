#include <iostream>

using namespace std;

struct box{
    int data;
    box* next;
    box(const int& dataTemp,box *nextTemp )
    :data(dataTemp), next(nextTemp){}
};
class List{
private:
    box * first;
    box * last;
public:
    List(){
        first = last = NULL;
    }
    //~List()
};
int main()
{

    return 0;
}
