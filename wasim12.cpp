#include<iostream>
using namespace std;
int main()
{
    int a,s=1;
    cout<<"Enter any number\n";
    cin>>a;
    while(a)
    {
        s=s*a;
        a--;
    }
    cout<<"Factorial is="<<s;
    cout<<endl;
    return 0;
}