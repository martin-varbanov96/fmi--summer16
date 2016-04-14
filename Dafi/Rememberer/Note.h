#ifndef NOTE_H
#define NOTE_H



class Note{
    public:
        Note(int, char*, char*, char*);
        ~Note();

        void setPriority(int);
        void setTitle(char*);

        void print() const;
    private:
        int priority;
        char* title;
        char* message;
        char* category;
        //todo date


};
#endif
