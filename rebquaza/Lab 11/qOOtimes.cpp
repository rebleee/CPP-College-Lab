#include <iostream>

class MyTime {
private:
    short hours, minutes, seconds;

public:
    MyTime(short hours = 0, short minutes = 0, short seconds = 0)
        : hours(hours), minutes(minutes), seconds(seconds) {}

    MyTime& operator++() {
        ++this->seconds;
        this->minutes += this->seconds / 60;
        this->seconds = this->seconds % 60;
        this->hours += this->minutes / 60;
        this->minutes = this->minutes % 60;
        return *this;
    }

    MyTime operator++(int) {
        MyTime temp(hours, minutes, seconds);
        this->seconds++;
        this->minutes += this->seconds / 60;
        this->seconds = this->seconds % 60;
        this->hours += this->minutes / 60;
        this->minutes = this->minutes % 60;
        return temp;
    }

    MyTime operator + (const MyTime &d1) {
        int total_seconds = this->seconds + d1.seconds;
        int total_minutes = this->minutes + d1.minutes;
        int total_hours = this->hours + d1.hours;

        total_minutes += total_seconds / 60;
        total_seconds %= 60;
        total_hours += total_minutes / 60;
        total_minutes %= 60;

        return MyTime(total_hours, total_minutes, total_seconds);
    }

    void print() {
        std::cout << hours << "h : " << minutes << "m : " << seconds << "s" << std::endl;
    }
};

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