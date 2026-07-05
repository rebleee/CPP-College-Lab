#pragma once

#include <iostream>

class MyTime{
    private:
    short hours,minutes,seconds;

    public:
    MyTime(short hours=0,short minutes=0, short seconds=0)
        :hours(hours),minutes(minutes),seconds(seconds){}

    friend MyTime operator+(const MyTime &,const MyTime &);

    friend std::istream& operator>>(
        std::istream &inputStream,MyTime &t);

    friend std::ostream& operator<<(
        std::ostream &outputStream,const MyTime &t);

};