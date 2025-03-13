#include<iostream>
using namespace std;
int Find_Highest_Digit_In_A_Given_Number(int n);
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    cout<<"Max digit is="<<Find_Highest_Digit_In_A_Given_Number(n);
    cout<<endl;
    return 0;
}
int Find_Highest_Digit_In_A_Given_Number(int n)
{
    int r,s;
    r=n%10;
    n=n/10;
    while(n)
    {
        s=n%10;
        if(s>r)
        {
            r=s;
        }
        n=n/10;
    }
    return r;
}