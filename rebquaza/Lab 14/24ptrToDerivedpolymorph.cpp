#include <iostream>

class polygon{
    public:
       virtual double area(){
            return 0;
        }
};

class triangle:public polygon{
    protected:
        double base,height;
    public:
        triangle(double base=0,double height=0):base(base), height(height){}
            virtual double area(){
            return height*base/2;
        }
};

int main(){
    polygon *p;
    triangle t(20,11.5);
    std::cout<<t.area()<<std::endl;

    p=&t;
    std::cout<<p->area()<<std::endl;

    return 0;
}

