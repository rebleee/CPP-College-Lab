#include <iostream>

class Base{
    protected:
        int m_id;
    public:
        Base(): m_id(0){
            std::cout<<"Base\n";
        }
        int getID()const{
            return m_id;
        }
};

class Derived : public Base{
    protected:
        double m_cost;
    public:
        Derived() : m_cost(0){
            std::cout<<"Derived\n";
        }

        double getCost()const{
            return m_cost;
        }
};

class SecondDerived : public Derived{
    protected:
        int m_distance;
    public:
        SecondDerived(){
            std::cout<<"Second Derived\n";
        }
};

int main(){
    std::cout<<"Instantiating Base Class\n";
    Base b;
    std::cout<<"Instantiating Derived\n";
    Derived d;
    std::cout<<"Constructing SecondDerived\n";
    SecondDerived sd;
    std::cout<<sd.getID()<<std::endl; /*prints 0*/
    return 0;
}