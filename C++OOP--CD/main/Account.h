#ifndef ACC
#define ACC
class Account{
    public:
        Account(char*, char*, int);

        void print() const;
        bool correctPassword(char*);
        bool validate(char*, char*); //
        int getPrivelege();
        void createAcount(char*, char* , int );
        void serialiseTxt() const;
    private:
        char* name;
        char* password;//letters and numbers
        int lvlOfPriv; //1. Guest, 2.Member, 3.Admin

};


#endif // ACC
