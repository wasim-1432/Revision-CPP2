#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        Date():d(12),m(2),y(2025)
        {
        }
        void ShowData()
        {
            cout<<d<<"/"<<m<<"/"<<y;
        }
};
int main()
{
    Date d1;
    d1.ShowData();
    cout<<endl;
    return 0;
}