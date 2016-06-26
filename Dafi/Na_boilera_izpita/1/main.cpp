#include <iostream>

using namespace std;

class Array{
public:
    int operator== (const Array &right) const{
        if (size != right.size) //ei toz tuka lipsva :))
            return 0;
        for (int i = 0; i < size; i++)
            if (ptr[i] != right.ptr[i])
                return 0;
        return 1;
    }
private:
    int *ptr;
    int size;

};

int main()
{
}
