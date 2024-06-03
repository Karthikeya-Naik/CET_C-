#include <iostream>
using namespace std;
int main()
{
    int num,count=1,i;
    std::cout<<"Enter the Number: ";
    cin>>num;
    for(i=1;i<num/2;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        std::cout<<num<<" is a prime number.";
    }
    else
        std::cout<<num<<" is not a prime.";
}
