#include "Libr.h"

Libr::Libr(int cap)
:capacity(cap), size(0)
{
    knijki = new Knijka[capacity];
}
Libr::~Libr(){
    delete[] knijki;

}
void Knijka::copy(const Libr& other){
    capacity = other.capacity;
    size = other.size;

    knijki  = new Knijka[capacity];
}

