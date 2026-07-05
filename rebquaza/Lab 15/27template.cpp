#include <iostream>

template<typename T>
class Pair{
    private:
        T first;
        T second;

    public:
        Pair(){}
        Pair(T f,T s): first(f),second(s){}

        T max(){
            return (first < second ? second:first);
        }
};

int main(){
    Pair<int>p1(5,6);
    std::cout<<p1.max()<<" is larger\n";

    Pair<double>p2(3.4,1.2);
    std::cout<<p2.max()<<" is larger\n";

    Pair<char>p3('d','e');
    std::cout<<p3.max()<<" is larger\n";

    return 0;
}