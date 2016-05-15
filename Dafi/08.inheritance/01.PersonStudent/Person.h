#ifndef PER_H
#define PER_H
class Person{
private:
    char* name;
    Date birthDate;
public;
    Person(char*, Date);
    Person(const Person&);
    ~Person();
    Person& operator = (const Person&);

    void setName(const char*);
    void SetDate(const Date*);

    char* getName() const;
    char* getDate() const;
    void print() const;
};

#endif // PER_H
