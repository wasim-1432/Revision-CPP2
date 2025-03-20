#include<iostream>
using namespace std;
int Calculate_Volume_Of_Cuboid_Cone_And_Sphare(int l,int w,int h);
float Calculate_Volume_Of_Cuboid_Cone_And_Sphare(int r,int h);
float Calculate_Volume_Of_Cuboid_Cone_And_Sphare(int r);
int main()
{
    int l,w,h,r;
    cout<<"Enter the length,width & height"<<endl;
    cin>>l>>w>>h;
    cout<<"Volume of cuboid is="<<Calculate_Volume_Of_Cuboid_Cone_And_Sphare(l,w,h)<<endl;
    cout<<"Enter the radius and height of cone"<<endl;
    cin>>r>>h;
    cout<<"Volume of cuboid="<<Calculate_Volume_Of_Cuboid_Cone_And_Sphare(r,h)<<endl;
    cout<<"Enter the radius of sphare"<<endl;
    cin>>r;
    cout<<"Volume of sphare is="<<Calculate_Volume_Of_Cuboid_Cone_And_Sphare(r);
    cout<<endl;
    return 0;
}
int Calculate_Volume_Of_Cuboid_Cone_And_Sphare(int l,int w,int h)
{
    return l*w*h;
}
float Calculate_Volume_Of_Cuboid_Cone_And_Sphare(int r,int h)
{
    return 3.14*r*r*h/3.0;
}
float Calculate_Volume_Of_Cuboid_Cone_And_Sphare(int r)
{
    return 4*3.14*r*r*r/3.0;
}