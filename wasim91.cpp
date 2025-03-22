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
        Complex Add(Complex C)
        {
            Complex temp;
            temp.real=real+C.real;
            temp.imaginary=imaginary+C.imaginary;
            return temp;
        }
        Complex Subtract(Complex C)
        {
            Complex temp;
            temp.real=real-C.real;
            temp.imaginary=imaginary-C.imaginary;
            return temp;
        }
        Complex Multiply(Complex C)
        {
            Complex temp;
            temp.real=real*C.real-imaginary*C.imaginary;
            temp.imaginary=real*C.imaginary+imaginary*C.real;
            return temp;
        }
};
int main()
{
    Complex c1,c2;
    c1.SetData(2,2);
    c2.SetData(3,4);
    c2=c1.Multiply(c2);
    c2.ShowData();
    cout<<endl;
    return 0;
}