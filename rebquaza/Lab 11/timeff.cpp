#include <iostream>

#include "timeff.h"

MyTime operator+(const MyTime &d1,const MyTime &d2){

    short seconds=d1.seconds + d2.seconds;
    short minutes=seconds/60;
    seconds=seconds % 60;

    minutes+= d1.minutes + d2.minutes;
    short hours = minutes/60;
    minutes %=60;

    hours+= d1.hours + d2.hours;

    return MyTime(hours,minutes,seconds);

}

std::ostream& operator <<(std::ostream& outputStream,const MyTime& t){
    return outputStream <<t.hours << ":" <<t.minutes <<":"<<t.seconds;
}

std::istream& operator >>(std::istream& inputStream,MyTime& t){
    return inputStream >>t.hours>>t.minutes>>t.seconds;
}

int main() {
    MyTime t1, t2, t3;

    std::cout << "Enter first time (Hours Minutes Seconds separated by spaces): ";
    std::cin >> t1;

    std::cout << "Enter second time (Hours Minutes Seconds separated by spaces): ";
    std::cin >> t2;

    t3 = t1 + t2;

    std::cout << "Time 1: " << t1 << std::endl;
    std::cout << "Time 2: " << t2 << std::endl;
    std::cout << "Summed Time: " << t3 << std::endl;

    return 0;
}
