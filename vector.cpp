#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> g1;
    for(int i=1;i<=10;i++)
            g1.insert(g1.end(),i);
    cout<<"Output of begin and end : ";
    for(auto i=g1.begin();i!=g1.end();++i)
            cout<<*i<<" ";
    cout<<"\nOutput of rbegin and rend : ";
    for(auto ir=g1.rbegin();ir!=g1.rend();++ir)
            cout<<*ir<<" ";
    return 0;
}
