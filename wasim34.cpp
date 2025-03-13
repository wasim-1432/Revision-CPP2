#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    if(a>b)
    {
        cout<<"Maximum number is="<<a;
    }
    else
    {
        cout<<"Maximum number is ="<<b;
    }
    cout<<endl;
    return 0;
}