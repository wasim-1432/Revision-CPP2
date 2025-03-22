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
            cout<<real<<"+"<<imaginary<<"i";
        }
};
int main()
{
    Complex c1;
    c1.SetData(2,3);
    c1.ShowData();
    cout<<endl;
    return 0;
}