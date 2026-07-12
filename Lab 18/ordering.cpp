#include <iostream>

class student{
    private:
        int roll;
        std::string name;

    public:
        student(int roll,std::string name){
            if(roll<=0){
                throw "Invalid Roll Number";
            }
            this->roll = roll;
            this->name = name;
        }

        int compare(const student& other)const{
            if(this->roll<other.roll){
                return -1;
            }
                return 1;
        }
        
        void order()const{
            std::cout<< roll << "," << name << std::endl;
        }
};

int main(){
    try{
        int r1,r2,r3;
        std::string n1,n2,n3;

        std::cout<<"Enter Name & roll for student 1: "<<std::endl;
        std::cin>>n1>>r1;

        std::cout<<"Enter Name & roll for student 2: "<<std::endl;
        std::cin>>n2>>r2;

        std::cout<<"Enter Name & roll for student 3: "<<std::endl;
        std::cin>>n3>>r3;

        std::cout<<"\n";

        student s1(r1,n1);
        student s2(r2,n2);
        student s3(r3,n3);

        s1.order();
        s2.order();
        s3.order();
    }
    catch(const char*message){
        std::cerr << "ERROR!!!"<<message<<std::endl;
    }
}