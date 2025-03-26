#include<iostream>
using namespace std;
class Array
{
    private:
        int *p;
        int size;
    public:
        Array()
        {
            size=0;
            p=new int[size];
        }
        Array(int s)
        {
            size=s;
            p=new int[size];
        }
        void Input()
        {
            int i;
            cout<<"Enter the array elements\n";
            for(i=0;i<=size-1;i++)
            {
                cin>>p[i];
            }
        }
        void ShowData()
        {
            int i;
            for(i=0;i<=size-1;i++)
            {
                cout<<p[i]<<" ";
            }
        }
        Array operator=(Array X)
        {
            size=X.size;
            for(int i=0;i<=size-1;i++)
            {
                p[i]=X.p[i];
            }
            return *this;
        }
};
int main()
{
    Array A(4),A1;
    A.Input();
    A1=A;
    A1.ShowData();
    cout<<endl;
    return 0;
}