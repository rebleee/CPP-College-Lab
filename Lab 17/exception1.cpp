#include <iostream>

int factorial(int n){
    if (n<0){
        throw " Number must be greater than 0 i.e positive";
    }
    int result=1;
    for(int i=1;i<=n;i++){
        result *=i;
    }
    return result;
}

int main(){
    int n;
    std::cout<<"Enter a number:";
    std::cin>>n;
    try{
        int f=factorial(n);
        std::cout<<n<<"! = " << f << std::endl;;
    }
    catch(const char*message){
        std::cerr << "ERROR!!!"<<message<<std::endl;
    }
}