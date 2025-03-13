#include<iostream>
using namespace std;
int Print_Pascals_Triangle_For_N_Lines(int n);
int Factorial_Of_A_Given_Number(int n);
int main()
{
    int n;
    cout<<"Enter the size of pascals triangle"<<endl;
    cin>>n;
    Print_Pascals_Triangle_For_N_Lines(n);
    cout<<endl;
    return 0;
}
int Print_Pascals_Triangle_For_N_Lines(int n)
{
    int i,j,k,t;
    for(i=1;i<=n;i++)
    {
        k=1;
        t=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i && k)
            {
                cout<<Factorial_Of_A_Given_Number(i-1)/Factorial_Of_A_Given_Number(i-1-t)/Factorial_Of_A_Given_Number(t);
                k=0;
                t++;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<"\n";
    }
}
int Factorial_Of_A_Given_Number(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}