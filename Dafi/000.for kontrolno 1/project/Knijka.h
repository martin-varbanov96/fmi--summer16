#ifndef BOOK_H
#define BOOK_H

class Knijka{
    public:
        Knijka(int = 0, const char* = "", const char* = "");
        Knijka(const Knijka&);
        Knijka& operator = (const Knijka&);
        ~Knijka();

        int getNumber();
        const char* getTitle();
        const char* getAuthor();

        void setNumber(int) ;
        void setAuthor(const char*);
        void setTitle(const char*) ;
        void print() const;


    private:
        int number;
        char* title;
        char* author;
};

#endif // BOOK_H
