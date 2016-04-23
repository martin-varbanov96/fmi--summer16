#include <iostream>

using namespace std;

class Child{
    public:

        char* name;
        int age;
        virtual void print() = 0;
};

class Daughter: public Child{
    public:
        Daughter(int a = 0, char* n="Minka"):name(n){
            age = a;
            name = n;
        }
        int getAge(){
            return this->age;
        }
        char* getName(){
            return this->name;
        }
        void setAge(int temp){
            this->age = temp;
        }
        void setName(char* temp){
            this->name = temp;
        }
        void print(){
            cout << "Hi I am " << this->name << " and I am " << this->age << "  old. " << endl;
        }
    protected:
        int age;
        char* name;

};
class Son: public Child{
    public:
        Son(int a = 0, char* n="Mincho"):name(n){
            age = a;
            name = n;
        }
        int getAge(){
            return this->age;
        }
        char* getName(){
            return this->name;
        }
        void setAge(int temp){
            this->age = temp;
        }
        void setName(char* temp){
            this->name = temp;
        }
        void print(){
            cout << "Hi I am " << this->name << " and I am " << this->age << "  old. " << endl;
        }
    protected:
        int age;
        char* name;

};

int main()
{
    Daughter daughters[3];
    Son sons[4];

    Child *children[] = {&sons[1], &daughters[1], &sons[2], &sons[3], &daughters[2]};
    for(int i = 0; i < 5; i++){
        children[i]->print();
    }

    return 0;
}
