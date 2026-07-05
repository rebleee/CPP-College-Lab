#include <iostream>

class Vector{
    private:
        double x,y,z;
        bool isRow,rowType;

    public:
        Vector(){
            x=0;y=0;z=0;
            isRow=true;
        }

        Vector(double a,double b, double c){
            x=a;
            y=b;
            z=c;
            isRow=rowType;
        }

        ~Vector(){}

        Vector operator+(const Vector& v)const{
            if(this->isRow!=v.isRow){
                std::cout<<"Error"<<std::endl;
                return Vector(0,0,0,this->isRow);
            }
            return Vector(this->x+v.x,this->y+v.y,this->z+v.z,this->isRow);
        }

        Vector operator-(const Vector& v)const{
            if(this->isRow!=v.isRow){
                std::cout<<"Error"<<std::endl;
                return Vector(0,0,0,this->isRow);
            }
            return Vector(this->x-v.x,this->y-v.y,this->z-v.z,this->isRow);
        }

         Vector operator+(const Vector& v)const{
            if(this->isRow!=v.isRow){
                std::cout<<"Error"<<std::endl;
                return 0;
            }
            return (this->x*v.x)+(this->y*v.y)+(this->z*v.z);
        }

        Vector& operator+=(const Vector& v){
            if(this->isRow!=v.isRow){
                std::cout<<"Error"<<std::endl;
                return *this;
            }
            this->x += v.x;
            this->y += v.y;
            this->z += v.z;
            return *this;
        }

        bool operator==(const Vector& v)const{
            return(this->isRow==v.isRow && this->x == v.x && this->y == v.y && this->z == v.z);
        }   
        
        bool operator>(const Vector& v)const{
            if(this->isRow!=v.isRow){
                std::cout<<"ERROR"<<std::endl;
                return false;
            }
            return(this->x > v.x && this->y > v.y && this->z > v.z);
        }   

        friend std::ostream& operator<<(std::ostream& os,const Vector&v){
            if(v.isRow){
                os<<"["<<v.x<<","<<v.y<<","<<v.z<<"] (Row)";
            }
            else{
                os<<"["<<v.x<<","<<v.y<<","<<v.z<<"]^T (Column)";
            }
            return os;
        }

        friend std::istream& operator>>(std::istream& is,const Vector&v){
            char choice;
            std::cout<<"Enter x,y,z components:";
            is>>v.x>>v.y>>v.z;
            std::cout<<"Is it a row vecor?(y/n):";
            is>>choice;
            v.isRow=(choice=='y'||choice=='Y');
            return is;
        }

    };

    int main(){
    Vector r1(1,2,3,true);
    Vector r2(4,5,6,true);
    Vector c1(2,3,4,false);

    std::cout<<"Vector r1:"<<r1<<std::endl;
    std::cout<<"Vector r2:"<<r2<<std::endl;
    std::cout<<"Vector c1:"<<c1<<std::endl;
   

    Vector sum=r1+r2;
    std::cout<<"r1+r2="<<sum<<std::endl;

    Vector diff=r2-r1;
    std::cout<<"r2+r1="<<diff<<std::endl;
    
    Vector product=r1*c1;
    std::cout<<"r1*c1="<<product<<std::endl;
    double invalidProduct=r1*r2;

    r1+=r2;
    std::cout<<"Is r1 after =+ r2:"<<r1<<std::endl;

    std::cout<<"Is r1 == r2?"<<(r1==r2?"Yes":"No")<<std::endl;

    Vector vLarge(10,10,10,true);
    Vector vSmall(2,3,4,true);
    std::cout<<"Is vLarge>vSmall?"<<(vLarge>vSmall?"YES":"NO")<<std::endl;

    Vector userVector;
    std::cout<<"Enter:";
    std::cin>>userVector;
    std::cout<<"You Entered:"<<userVector<<std::endl;


    return 0;
}
