#include <iostream>

int main(){
    std::string str;
    std::cout<<"Enter Secret code:";
    std::getline(std::cin, str);
    std::string word = str;
    int tl = word.length();

    std::string encryptedS = "";
    
    int i,newc;
    for (i=0;i<=tl;i++){
        char newc=str[i] + 3;

        if (newc > 'z') {
        newc = newc - 26;
        }

        encryptedS+=newc;
        std::cout<<newc;
    }

    std::cout<<"\n";
    int n;
    std::cout<<"enter the password"<<std::endl;
    std::cin>>n;

    
    for (i=0;i<=tl;i++){
        char Scode=encryptedS[i] - n;

        if (Scode < 'a') {
        Scode = Scode + 26;
        }

        std::cout<<Scode;
    }
    
}