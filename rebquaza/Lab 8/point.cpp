#include<iostream>
#include<cmath>
#include"point.h"

void Point::setCoordinates(double x, double y){
    this->x=x;
    this->y=y;
}

double Point::distanceFrom(const Point &anotherPoint) const{
    double sq_xdiff = pow(anotherPoint.x-this->x,2);
    double sq_ydiff = pow(anotherPoint.y-this->y,2);

      return sqrt(sq_xdiff + sq_ydiff);
}