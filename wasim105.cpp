#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        Complex(int x,int y)
        {
            real=x;
            imaginary=y;
        }
        void ShowData()
        {
            if(imaginary>0)
            {
                cout<<real<<"+"<<imaginary<<"i"<<" ";
            }
            else
            {
                cout<<real<<imaginary<<"i"<<" ";
            }
        }
};
int main()
{
    Complex c[5]={Complex(2,3),Complex(3,4),Complex(4,5),Complex(5,6),Complex(6,7)};
    int i;
    for(i=0;i<=4;i++)
    {
        c[i].ShowData();
    }
    cout<<endl;
    return 0;
}