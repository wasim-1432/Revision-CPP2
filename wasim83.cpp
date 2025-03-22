#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        void SetData(int a,int b,int c)
        {
            d=a;
            m=b;
            y=c;
        }
        void ShowData()
        {
            cout<<d<<"/"<<m<<"/"<<y;
        }
};
int main()
{
    Date d1;
    d1.SetData(12,3,2025);
    d1.ShowData();
    cout<<endl;
    return 0;
}