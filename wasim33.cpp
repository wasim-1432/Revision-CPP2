#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"A="<<a<<" B="<<b<<endl;
    cout<<endl;
    return 0;
}