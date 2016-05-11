#include <iostream>
#include <string>

using namespace std;
class Human{
    private:
        string name;
        int egn;
    public:
        Human(){
            egn = 0;
            name = "";
        }
        int getEgn(){
            return egn;
        }
        string getName(){
            return name;
        }
        void setName(string temp){
            this->name = temp;
        }
        void setEgn(int temp){
            this->egn = temp;
        }
};

class Student:public Human{
    private:
        int fn;
        string spec;
        Human person;
    public:
        Student(int fnTemp=0, string spec ){
            fn = 0;
            spec = "";
            person;
        }
        int getFn(){
            return fn;
        }
        string getSpec(){
            return spec;
        }
        void setFn(int temp){
            this->fn = temp;
        }
        void setSpec(string temp){
            this->spec = temp;
        }
        void setPerson(Human temp){
            this->person = temp;
        }
};

int main()
{
    Student gosho;

    return 0;
}
