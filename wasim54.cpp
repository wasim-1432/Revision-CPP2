#include<iostream>
using namespace std;
int Maximum_Number(int a,int b);
float Maximum_Number(float a,float b);
int main()
{
    int a,b;
    cout<<"Enter any two int numbers\n";
    cin>>a>>b;
    cout<<"Max is="<<Maximum_Number(a,b);
    float c,d;
    cout<<"\nEnter any two real numbers\n";
    cin>>c>>d;
    cout<<"Max is="<<Maximum_Number(c,d);
    cout<<endl;
    return 0;
}
int Maximum_Number(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
float Maximum_Number(float a,float b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}