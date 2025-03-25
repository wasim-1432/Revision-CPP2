#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,sec;
    public:
        Time()
        {
            hour=0;
            min=0;
            sec=0;
        }
        Time(int x,int y,int z)
        {
            hour=x;
            min=y;
            sec=z;
        }
        Time operator+(Time T)
        {
            Time temp;
            temp.hour=hour+T.hour;
            temp.min=min+T.min;
            temp.sec=sec+T.sec;
            return temp;
        }
        void Normalise()
        {
            min=min+sec/60;
            sec=sec%60;
            hour=hour+min/60;
            min=min%60;
            hour=hour%12;
        }
        void ShowData()
        {
            cout<<hour<<":"<<min<<":"<<sec<<endl;
        }
};
int main()
{
    Time t1(1,34,56),t2(3,56,4),t3;
    t3=t1+t2;
    t3.Normalise();
    t3.ShowData();
    cout<<endl;
    return 0;
}