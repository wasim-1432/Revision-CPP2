#include<iostream>
using namespace std;
class A
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
        void Input()
        {
            cout<<"Enter the value of a and b";
            cin>>a>>b;
        }
};
class B:public A
{
    private:
        int c;
    public:
        void Input()
        {
            int x,y;
            cout<<"Enter any three value"<<endl;
            cin>>x>>y>>c;
            SetData(x,y);
        }
        void ShowData()
        {
            A::ShowData();
            cout<<" C="<<c;
        }
};
int main()
{
    B b1;
    b1.Input();
    b1.ShowData();
    cout<<endl;
    return 0;
}