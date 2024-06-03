#include <iostream>
using namespace std;
int main()
{
    int num,a=0,b=1,c=0;
    std::cout<<"Enter the number: ";
    cin>>num;
    std::cout<<"Series : "<<a<<" "<<b<<" ";
    for(int i=2;i<num;i++){
        c=a+b;
        a=b;
        b=c;
        std::cout<<c<<" ";
    }
    

    return 0;
}
