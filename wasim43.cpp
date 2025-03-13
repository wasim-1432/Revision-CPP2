#include<iostream>
using namespace std;
int Calculate_Power_Of_A_Given_Number(int number,int power);
int main()
{
    int number,power;
    cout<<"Enter the number"<<endl;
    cin>>number;
    cout<<"Enter the power value"<<endl;
    cin>>power;
    cout<<"Required Answer="<<Calculate_Power_Of_A_Given_Number(number,power);
    cout<<endl;
    return 0;
}
int Calculate_Power_Of_A_Given_Number(int number,int power)
{
    int s=1;
    while(power)
    {
        s=s*number;
        power--;
    }
    return s;
}