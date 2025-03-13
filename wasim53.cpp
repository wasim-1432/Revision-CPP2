#include<iostream>
#include<math.h>
using namespace std;
float Area(int r);
int Area(int l,int w);
float Area(int a,int b,int c);
int main()
{
    int r;
    cout<<"Enter the radius of the circle\n";
    cin>>r;
    cout<<"Area of circle is="<<Area(r);
    cout<<endl;
    return 0;
}
float Area(int r)
{
    return 3.14*r*r;
}
int Area(int l,int w)
{
    return l*w;
}
float Area(int a,int b,int c)
{
    int s,ar;
    s=(a+b+c)/2.0;
    ar=sqrt(s*(s-1)*(s-b)*(s-c));
    return ar;
}