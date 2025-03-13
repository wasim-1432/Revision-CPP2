#include<iostream>
using namespace std;
int Check_whether_A_Given_Number_Is_Prime_Or_Not(int a);
int main()
{
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(Check_whether_A_Given_Number_Is_Prime_Or_Not(a))
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime number");
    }
    printf("\n");
    return 0;
}
int Check_whether_A_Given_Number_Is_Prime_Or_Not(int a)
{
    int i=2;
    while(i<=a)
    {
        if(a%i==0)
        {
            break;
        }
        i++;
    }
    if(a==i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}