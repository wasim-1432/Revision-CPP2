#include<iostream>
#include<string.h>
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
        const char *GetMonth()
        {
            switch(m)
            {
                case 1:
                    return "Jun";
                case 2:
                    return "Feb";
                case 3:
                    return "March";
                case 4:
                    return "April";
                case 5:
                    return "May";
                case 6:
                    return "June";
                case 7:
                    return "July";
                case 8:
                    return "Aug";
                case 9:
                    return "Sept";
                case 10:
                    return "Oct";
                case 11:
                    return "Nov";
                case 12:
                    return "Dec";
            }
        }
        void ShowData()
        {
            cout<<d<<"-"<<m<<"-"<<y<<endl;
            cout<<d<<"-"<<GetMonth()<<"-"<<y;
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