#include <iostream>
#include<cmath>

const float PI=3.1415;

namespace ns1{
int calc(int a){return pow(a,3);}
int calc(int r,int h){return PI*pow(r,2)*h;}
}
namespace ns2{
    int calc(int a){return 6*a;}
    int calc(int r,int h){return 2*PI*r*h+2*PI*pow(r,2);}
}


int main() {
    int x = 3, y = 4;

    std::cout << "Cube Volume: " << ns1::calc(x) << std::endl;
    std::cout << "Cylinder Volume: " << ns1::calc(x, y) << std::endl;
    std::cout << "Cube Surface Area: " << ns2::calc(x) << std::endl;
    std::cout << "Cylinder Surface Area: " << ns2::calc(x, y) << std::endl;

    return 0;
}
