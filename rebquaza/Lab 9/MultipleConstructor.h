#pragma once
#include <iostream>

class Point{
    private:
        double x,y,z;
    public:
        Point(){
            std::cout<<"FDefault constructor called\n";
        }
        Point(int x,int y){
            this->x=x;
            this->y=y;
            std::cout<<"Parameterized Constructor (int) called\n";
        }
        Point(double x, double y=0):
            x(x),y(y){
            std::cout<<"Parameterized Constructor (double) called\n";
        }
        Point(const Point& other):
            x(other.x),y(other.y){
                std::cout<<"Copy Constructor called\n";
            }
        void print(){
            std::cout<<"x="<<x<<", y="<<y<<std::endl;
        }
};
