#include<iostream>
using namespace std;
class Complex 
{
    private:
        int real,imaginary;
    public:
        void SetData(int real,int imaginary)
        {
            this->real=real;
            this->imaginary=imaginary;
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
        Complex operator+(Complex X)
        {
            Complex temp;
            temp.real=real+X.real;
            temp.imaginary=imaginary+X.imaginary;
            return temp;
        }
};
int main()
{
    Complex *p1,*p2,*p3=nullptr;
    p1=new Complex();
    p2=new Complex();
    p1->SetData(1,2);
    p2->SetData(2,3);
    p3=new Complex();
    if(p3!=nullptr)
    {
        *p3=*p1+*p2;
    }
    p3->ShowData();
    delete p1;
    delete p2;
    delete p3;
    cout<<endl;
    return 0;
}