#include <iostream>

int add(int a,int b){return a+b;}
int add(int a,int b,int c){return a+b+c;}
// long add(int a, int b) { return a + b; } // Not possible

int main(){
    int x,y,z;
    int sum;

sum=(x=4,y=3,add(x,y));
sum=(x=4,y=3,z=9,add(x,y,z));
std::cout<<sum<<std::endl;
}
