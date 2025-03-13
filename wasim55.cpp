#include<iostream>
using namespace std;
int Add(int a,int b);
float Add(float a,float b);
float Add(int a,float b);
float Add(float a,int b);
int main()
{
    int a,b;
    float c,d;
    cout<<"Enter any two number\n";
    cin>>a>>c;
    cout<<"Sum is="<<Add(a,c);
    cout<<endl;
    return 0;
}
int Add(int a,int b)
{
    return a+b;
}
float Add(float a,float b)
{
    return a+b;
}
float Add(int a,float b)
{
    return a+b;
}
float Add(float a,int b)
{
    return a+b;
}