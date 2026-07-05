#include <iostream>

int main(){
    std::string str;
    std::cout<<"Enter a sentence:";
    /*std::cin>>str;
    std::cout<<"The Entered string is: "<<str<<std::endl;*/
    std::getline(std::cin, str); 
    std::cout<<"The Entered string is: "<<str<<std::endl;
}