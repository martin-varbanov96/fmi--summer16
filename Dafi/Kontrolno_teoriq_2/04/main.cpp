#include <iostream>

using namespace std;
class Date{
public:
    Date(int = 0, int = 0, int = 0);
    Date &operator++(int);
    void print(){
        cout << day << endl;
    }
private:
    int month;
    int day;
    int year;
    void helpIncrement();

};
Date::Date(int d, int  y, int  m){
    month = m;
    day = d;
    year = y;
}
Date &Date::operator++(int){
    Date temp = *this;
    helpIncrement();
    return temp;
}
void Date::helpIncrement(){
    day++;
}

int main()
{
    Date a(1, 2, 3);
    a.print();
    a++;
    a.print();
    return 0;
}
/*
    Идеята на задачата е, че при предефинирането префикс оператора ни е нужен псевдоним, а при постфикса не ни е нужен.
*/
