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
    polygon *p=new triangle(20,10);
    std::cout<<p->area()<<std::endl;

    triangle*t = dynamic_cast<triangle *>(p);
    std::cout<<"Perimeter";

    std::cout<<p->area()<<std::endl;

    return 0;
}

