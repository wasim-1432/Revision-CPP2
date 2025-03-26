#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        void SetData(int x,int y)
        {
            real=x;
            imaginary=y;
        }
        void ShowData()
        {
            if(imaginary>0)
            {
                cout<<real<<"+"<<imaginary<<"i";
            }
            else
            {
                cout<<real<<imaginary<<"i";
            }
        }
        friend Complex operator-(Complex);
};
Complex operator-(Complex C)
{
    Complex temp;
    temp.real=-C.real;
    temp.imaginary=-C.imaginary;
    return temp;
}
int main()
{
    Complex c1,c2;
    c1.SetData(2,3);
    c2=-c1;   //c2=operator-(c1)
    c2.ShowData();
    cout<<endl;
    return 0;
}