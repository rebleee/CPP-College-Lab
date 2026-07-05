#include <iostream>

template<typename T>
    bool greater(T a, T b){
        return a>b;
    }

int main(){
    int a,b;
    std::cout<<"Enter two integers:";
    std::cin>>a>>b;

    std::cout<<greater(a,b)<<std::endl;
    std::cout<<greater<int>(a,b)<<std::endl;
    
    std::cout<<"a>b="<<greater<std::string>("b","a")<<std::endl;
}