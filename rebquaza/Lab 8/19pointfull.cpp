#include <iostream>
#include <cmath>

class Point{
    private:
        double x,y;
    public:
        void setCoordinates(double x,double y);
        double distanceFrom(const Point &anotherPoint) const;
};

void Point::setCoordinates(double x, double y){
    this->x=x;
    this->y=y;
}

double Point::distanceFrom(const Point &anotherPoint) const{
    double sq_xdiff = pow(anotherPoint.x-this->x,2);
    double sq_ydiff = pow(anotherPoint.y-this->y,2);

      return sqrt(sq_xdiff + sq_ydiff);
}

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