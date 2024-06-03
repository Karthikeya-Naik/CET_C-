#include <iostream>
using namespace std;
int main(){
    int num,f=1;
    std::cout<<"Enter the Number : ";
    cin>>num;
    for(int i=1;i<=num;i++){
        f=f*i;
    }
    std::cout<<"Factorial of "<<num<<" : "<<f;
}
