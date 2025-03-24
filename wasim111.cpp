#include<iostream>
using namespace std;
class Numbers
{
    private:
        int size;
        int *ptr;
    public:
        Numbers(int s)
        {
            size=s;
            ptr=new int[size];
            for(int i=0;i<=size-1;i++)
            {
                ptr[i]=i+1;
            }
        }
        ~Numbers()
        {
            delete []ptr;
        }
        Numbers(Numbers &n)
        {
            size=n.size;
            ptr=new int[size];
            for(int i=0;i<=size-1;i++)
            {
                ptr[i]=n.ptr[i];
            }
        }
        void Display()
        {
            for(int i=0;i<=size-1;i++)
            {
                cout<<ptr[i]<<" ";
            }
        }
};
int main()
{
    Numbers n1(5);
    cout<<"Original Numbers :";
    n1.Display();
    cout<<endl;
    return 0;
}