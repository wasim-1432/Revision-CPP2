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
        bool operator<(fraction F)
        {
            if(numerator>F.numerator && denominator<F.denominator)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    };
    int main()
    {
        fraction f1(2,3),f2(1,4);
        f1<f2;
        cout<<endl;
        return 0;
    }