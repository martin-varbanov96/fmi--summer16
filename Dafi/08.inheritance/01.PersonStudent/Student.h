#ifndef STU_H
#define STUD_H
class Student{
private:
    int grades;
    char* number;
public:
    Student(int =  2, char* = "ajsd");
    ~Student();
    Student(const Student&);
    Student& operator=(const Student&);

    void print() const;

    int getGrades();
    char* getNumber();

    void setGrades(int);
    void setNumber(char*);
};
#endif // STU_H
