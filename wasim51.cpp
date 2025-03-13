#include<iostream>
using namespace std;
int Swap_Data_Of_Two_Int_Variables_Using_Call_By_Reference(int &a,int &b);  //Using Call By Reference.
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    Swap_Data_Of_Two_Int_Variables_Using_Call_By_Reference(a,b);
    cout<<endl;
    return 0;
}
int Swap_Data_Of_Two_Int_Variables_Using_Call_By_Reference(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"A="<<a<<" B="<<b;
}