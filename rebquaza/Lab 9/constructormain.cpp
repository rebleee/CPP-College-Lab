#include <iostream>

#include "MultipleConstructor.h"

int main(){
    Point p4;
    p4.print();

    Point p5(10);
    p5.print();

    Point p6(30,40);
    p6.print();

    Point p1(p5);
    p1.print();

    Point p2=Point(5,6);
    p2.print();
}