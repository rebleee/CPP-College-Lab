#include <iostream>

template<typename T>
class Pair{
    public:
        T first;
        T second;
        Pair(){}
        Pair(T f,T s): first(f),second(s){}

    };

    template<typename T>
    T max(Pair<T> p){
        return (p.first<p.second ? p.second:p.first);
     }


int main(){
    Pair<int>p1(5,6);
    std::cout<<max(p1)<<" is larger\n";

    Pair<double>p2(3.4,1.2);
    std::cout<<max(p2)<<" is larger\n";

    Pair<char>p3('d','e');
    std::cout<<max(p3)<<" is larger\n";

    return 0;
}