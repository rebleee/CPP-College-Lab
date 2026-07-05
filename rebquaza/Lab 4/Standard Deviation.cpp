#include <iostream>
#include <cmath>

int main(){
    int n,i;
    double x[100],sum=0,mean,tsum,v,SD;
    std::cout<<"Enter amount of numbers:";
    std::cin>>n;

     std::cout<<"Enter " <<n<< " numbers"<<std::endl;

    for(i=0;i<n;i++){
        std::cout<<i+1<<")";
        std::cin>>x[i];
        sum=sum+x[i];
    }

    mean=sum/n;

    for(i=0;i<n;i++){

        tsum=tsum+ pow(x[i]-mean,2);

    }
     v=tsum/(n-1);
    
    SD=sqrt(v);

    std::cout<<"Standard Deviation="<<SD<<std::endl;
    return 0;
}