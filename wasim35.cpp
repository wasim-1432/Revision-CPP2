#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    cout<<"Enter the 10 elements for the array\n";
    for(i=0;i<=9;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum is="<<sum;
    cout<<endl;
    return 0;
}