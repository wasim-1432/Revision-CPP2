#include<iostream>
using namespace std;
int Add_2_Or_3_Int_Variables_Using_Default_Arguments(int x,int y,int z=0);   //Using Default Arguments
int main()
{
    int a,b,c;
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    cout<<"Sum of two numbers is="<<Add_2_Or_3_Int_Variables_Using_Default_Arguments(a,b);
    cout<<"\nEnter any three numbers\n";
    cin>>a>>b>>c;
    cout<<"Sum of three numbers is="<<Add_2_Or_3_Int_Variables_Using_Default_Arguments(a,b,c);
    cout<<endl;
    return 0;
}
int Add_2_Or_3_Int_Variables_Using_Default_Arguments(int x,int y,int z)   
{
    return x+y+z;
}