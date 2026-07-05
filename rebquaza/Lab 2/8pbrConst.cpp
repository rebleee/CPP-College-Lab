#include <iostream>

void add(const int &a,const int &b,int &result){
    result=a+b;
}

int main(){
    int a=20,b=5;
    int c;
    add(a,b,c);
    std::cout<<"SUM="<<c;
}