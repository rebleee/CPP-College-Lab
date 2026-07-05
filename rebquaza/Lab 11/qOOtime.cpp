#include <iostream>

#include "qOOtime.h"

MyTime& MyTime::operator++(){
    ++this->seconds;

    this->minutes += this->seconds / 60;
    this->seconds = this->seconds % 60;
    this->hours += this->minutes / 60;
    this->minutes = this->minutes % 60;

    return *this;
}

MyTime MyTime::operator++(int){
    MyTime temp(hours,minutes,seconds);

    this->seconds++;

    this->minutes += this->seconds / 60;
    this->seconds = this->seconds % 60;
    this->hours += this->minutes / 60;
    this->minutes = this->minutes % 60;
    
    return temp;
}
    MyTime MyTime::operator + (const MyTime &d1){
        MyTime d=d1;

        d.seconds += this->seconds;
        d.minutes += d.seconds/60;
        d.seconds %= 60;
        d.minutes +=this->minutes;
        d.hours += d.minutes/60;
        d.minutes %=60;
        d.hours += this->hours;

        return d;
    }
    

int main() {
    MyTime t1(1, 45, 40);
    MyTime t2(2, 20, 30);

    std::cout << "Initial t1: ";
    t1.print();
    std::cout << "Initial t2: ";
    t2.print();

    MyTime t3 = t1 + t2;
    std::cout << "t1 + t2: ";
    t3.print();

    ++t1;
    std::cout << "After ++t1: ";
    t1.print();

    return 0;
}

