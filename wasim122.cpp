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
        Time operator >(Time T)
        {
            if(hour>T.hour)
            {
                cout<<"True";
            }
            else if(hour<T.hour)
            {
                cout<<"False";
            }
            else if(min>T.min)
            {
                cout<<"True";
            }
            else if(min<T.min)
            {
                cout<<"False";
            }
            else if(sec>T.sec)
            {
                cout<<"True";
            }
            else
            {
                cout<<"False";
            }
        }
};
int main()
{
    Time t1(12,34,55),t2(4,56,4);
    t2>t1;
    cout<<endl;
    return 0;
}