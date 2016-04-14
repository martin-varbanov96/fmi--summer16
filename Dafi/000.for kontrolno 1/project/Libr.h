#ifndef LIB_H
#define LIB_H
#include "Knijka.h"
class Libr{
    public:
        Libr(int = 1);
        Libr(const Libr&);
        Libr& operator = (const Libr&);
        Knijka& operator [] (int);
        ~Libr();
    private:
        Knijka* knijki;
        int size;
        int capacity;
        void copy(const Libr&);
};

#endif


