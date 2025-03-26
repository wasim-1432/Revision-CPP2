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
    Complex *p=new Complex();
    p->SetData(1,2);
    p->ShowData();
    cout<<endl;
    return 0;
}