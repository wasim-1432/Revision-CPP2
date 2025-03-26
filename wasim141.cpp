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
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
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
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.real=X.real+Y.real;
    temp.imaginary=X.imaginary+Y.imaginary;
    return temp;
}
Complex operator-(Complex X,Complex Y)
{
    Complex temp;
    temp.real=X.real-Y.real;
    temp.imaginary=X.imaginary-Y.imaginary;
    return temp;
}
Complex operator*(Complex X,Complex Y)
{
    Complex temp;
    temp.real=X.real*Y.real-X.imaginary*Y.imaginary;;
    temp.imaginary=X.real*Y.imaginary+X.imaginary*Y.real;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.SetData(2,3);
    c2.SetData(3,4);
    c3=c1*c2;
    c3.ShowData();
    cout<<endl;
    return 0;
}