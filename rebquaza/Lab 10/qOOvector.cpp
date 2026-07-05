#include <iostream>

class Vector{
    private:
        double x,y,z;

    public:
        Vector(){
            x=0;y=0;z=0;
        }

        Vector(double a,double b, double c){
            x=a;
            y=b;
            z=c;
        }

        ~Vector(){}

        Vector add(Vector v){
            Vector result;
            result.x = this->x + v.x;
            result.y = this->y + v.y;
            result.z = this->z + v.z;
            return result;
        }
        
        void display(){
            std::cout<<"("<<x<<","<<y<<","<<z<<")"<<std::endl;
        }
};

int main(){
    Vector v1(1,2,3);
    Vector v2(4,5,6);

    std::cout<<"Vector 1:";
    v1.display();
    std::cout<<"\nVector 2:";
    v2.display();

    Vector sum=v1.add(v2);

    std::cout<<"Sum=";
    sum.display();

    return 0;
}