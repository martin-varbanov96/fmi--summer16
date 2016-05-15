#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(unsigned dayTemp, unsigned monthTemp, unsigned yearTemp)
    :day(dayTemp), month(monthTemp), year(yearTemp){
        this->setDate(dayTemp, monthTemp, yearTemp);
    }
/*
Защо не дава ?!?!?!!??!
Date::Date(const Date& tempObj){
    this->setDate(tempObj.getDay(), tempObj.getMonth(), tempObj.getYear())
}
*/
Date::Date(const Date& tempObj)
    :day(tempObj.day), month(tempObj.month), year(tempObj.year){}

Date::~Date(){}

Date&  Date:: operator = (const Date& tempObj){
    if(this != &tempObj){
        this->setDate(tempObj.day, tempObj.month, tempObj.year);
    }
}

unsigned Date::getDay(){
    return day;
}
unsigned Date::getMonth(){
    return month;
}
unsigned Date::getYear(){
    return year;
}
void Date::setDate(unsigned dayTemp, unsigned monthTemp, unsigned yearTemp){
    this->day = dayTemp;
    this->month = monthTemp;
    this->year = yearTemp;
}

void Date::print() const
{
    cout << day << "." << month << "." << year << endl;
}



