#include<iostream>
using namespace std;
class Array
{
    private:
        int *p;
        int size;
    public:
        Array(int s)
        {
            size=s;
            p=new int[size];
            int i;
            for(i=0;i<=size-1;i++)
            {
                p[i]=i+1;
            }
        }
        Array operator [](int index)
        {
            if(index<0)
            {
                cout<<"Invalid Index";
            }
            else
            {
                cout<<"Required Answer is="<<p[index];
            }
        }
        ~Array()
        {
            delete p;
        }
};
int main()
{
    Array a1(5);
    a1[3];
    cout<<endl;
    return 0;
}