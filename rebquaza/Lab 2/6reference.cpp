#include <iostream>

    int add(int &a, int &b){
        int s=a+b;
        a++;
        b++;
        return s;
    }
int main(){
    int x=4,y=5;
    std::cout<<"a before="<<x<<", b before="<<y;
    std::cout<<"\n";
    int z=add(x,y);
    std::cout<<"a after="<<x<<", b after="<<y;
} 