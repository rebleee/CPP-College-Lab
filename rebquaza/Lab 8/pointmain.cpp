#include<iostream>

#include"point.h"

int main(){
    double x,y;
    Point p1;
    std::cout<<"Enter first X and Y coordinates"<<std::endl;
    std::cin>>x>>y;
    p1.setCoordinates(x,y);

    Point p2;
    std::cout<<"Enter second X and Y coordinates"<<std::endl;
    std::cin>>x>>y;
    p2.setCoordinates(x,y);

    std::cout<<"Distance="<<p1.distanceFrom(p2)<<std::endl;
}