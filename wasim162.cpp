#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void SetData(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void ShowData()
        {
            cout<<"A="<<a<<" B="<<b;
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