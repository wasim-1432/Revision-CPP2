#include<iostream>
using namespace std;
class fraction
{
    private:
        long numerator;
        long denominator;
    public:
        fraction(long n=0,long d=0)
        {
            numerator=n;
            denominator=d;
        }
        fraction operator +(fraction F)
        {
            fraction temp;
            temp.numerator=numerator*F.denominator+F.numerator*denominator;
            temp.denominator=denominator*F.denominator;
            return temp;
        }
        void ShowData()
        {
            cout<<"Numerator="<<numerator<<" Denominator="<<denominator;
        }
};
int main()
{
    fraction f1(2,3),f2(3,4);
    f1=f1+f2;
    f1.ShowData();
    cout<<endl;
    return 0;
}