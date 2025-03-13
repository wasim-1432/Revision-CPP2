#include<iostream>
using namespace std;
int Check_Whether_A_Given_Number_Is_A_Term_Of_Fibonacci_Series_Or_Not(int n);
int main()
{
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    if(Check_Whether_A_Given_Number_Is_A_Term_Of_Fibonacci_Series_Or_Not(n))
    {
        cout<<"Given number is a term of fibonacci series";
    }
    else
    {
        cout<<"Not Fibonacci term";
    }
    cout<<endl;
    return 0;
}
int Check_Whether_A_Given_Number_Is_A_Term_Of_Fibonacci_Series_Or_Not(int n)
{
    int a=0,b=1,s=0;
    while(s<=n)
    {
        a=b;
        b=s;
        if(s==n)
        {
            return 1;
            break;
        }
        s=a+b;
    }
    if(s!=n)
    {
        return 0;
    }
}