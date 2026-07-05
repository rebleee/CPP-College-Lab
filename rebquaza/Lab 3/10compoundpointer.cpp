#include <iostream>

int main(){
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    int* ptr=arr;
    *ptr++ = 5;
    *(ptr+3) = 6;
    arr[5]=9;

    std::cout<<"array contains ";
    for(int ele:arr){
        std::cout<<ele<<",";
    }
    std::cout<<std::endl;
}