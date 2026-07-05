#include <iostream>

void swap(int &a,int &b){
int t=a;
a=b;
b=t;
}

int main(){
int a=20,b=5;
std::cout<<"a before="<<a<<"\t"<<"b before="<<b<<std::endl;

swap(a,b);
std::cout<<"a after="<<a<<"\t"<<"b after="<<b;

return 0;
}