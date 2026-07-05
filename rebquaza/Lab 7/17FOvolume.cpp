#include <iostream>

int calc(int a,int b){return a*b;}
int calc(int a,int b,int c){return a*b*c;}


int main(){
    int x,y,z;
    int area,volume;

area=(x=4,y=3,calc(x,y));
volume=(x=4,y=3,z=9,calc(x,y,z));
std::cout<<area<<std::endl;
std::cout<<volume<<std::endl;
}
