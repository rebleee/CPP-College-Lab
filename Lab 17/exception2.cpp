#include <iostream>

class MyException:public std::exception{
    private:
        std::string m_error;

    public:
        MyException(std::string error)
            :m_error{error}
{
}
const char *what()const noexcept{
    return m_error.c_str();
}
};

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

int sumOfNaturalNumbers(int n){
    if (n<0){
        throw "Natural number must be positive";
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    return sum;
}

int main(){
    int n;
    std::cout<<"n=";
    std::cin>>n;

    try{
        int f=factorial(n);
         std::cout<<n<<"! = " << f << std::endl;

        int s=sumOfNaturalNumbers(n);
        std::cout <<"Sum of Natural numbers upto " <<n<<" is "<< s <<std::endl;
    }

    catch(const char message){
        std::cerr<<"Error:"<<message<<std::endl;
    }

    catch(const int&errorcode){
        std::cerr<<"Error"<<errorcode<<"occured!"<<std::endl;
    }
    catch(const std::exception &exception){
        std::cerr<<"Standard exception:"<<exception.what()<<'\n';
    }
    return 0;
}