#include<iostream>
using namespace std;
class Integer
{
    private:
        int n;
    public:
        void SetData(int x)
        {
            n=x;
        }
        void ShowData()
        {
            cout<<n;
        }
        friend bool operator!(Integer);
        friend bool operator==(Integer,Integer);
};
bool operator==(Integer i1,Integer i2)
{
    if(i1.n==i2.n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool operator!(Integer i1)
{
    return !(i1.n);
}
int main()
{
    Integer i1,i2;
    i1.SetData(2);
    i2.SetData(3);
    !i2;   //operator!(i2)
    i1==i2;   //operator==(i1,i2);
    cout<<endl;
    return 0;
}