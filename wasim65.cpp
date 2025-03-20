#include<iostream>
using namespace std;
int Calculate_Prime_Factor_Of_A_Given_Number(int n);
int main()
{
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    Calculate_Prime_Factor_Of_A_Given_Number(n);
    cout<<endl;
    return 0;
}
int Calculate_Prime_Factor_Of_A_Given_Number(int n)
{
    int i=2,s[10],j=0,t=1;
    while(n>1)
    {
        if(n%i==0)
        {
            s[j]=i;
            j++;
            t++;
            n=n/i;
        }
        else
        {
            i++;
        }
    }
    for(i=0;i<t-1;i++)
    {
        
        if(s[i]!=s[i+1])
        {
            cout<<s[i]<<" ";
        }
    }
}