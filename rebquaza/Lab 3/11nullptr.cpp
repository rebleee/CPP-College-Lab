#include <iostream>
int main(){
    int var;
    int* ptr=&var;

    int a;
    int* ptrl;
    ptrl=&var;

    int* ptr2=nullptr;

    int* ptr3 =0;

    std::cout<<a <<","<< ptrl<<","<< ptr2<<","<< ptr3;
}