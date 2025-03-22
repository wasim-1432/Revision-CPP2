#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void SetTime(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void ShowTime()
        {
            Normalize_Time();
            cout<<h<<":"<<m<<":"<<s<<endl;
        }
        void Normalize_Time()
        {
            m=m+s/60;
            s=s%60;
            h=h+m/60;
            m=m%60;
            h=h%12;
        }
        Time Add(Time T)
        {
            Time temp;
            temp.h=h+T.h;
            temp.m=m+T.m;
            temp.s=s+T.s;
            return temp;
        }
        bool is_Greater(Time T)
        {
            if(h>T.h)
            {
                return true;
            }
            else if(h<T.h)
            {
                return false;
            }
            else if(m>T.m)
            {
                return true;
            }
            else if(m<T.m)
            {
                return false;
            }
            else if(s>T.s)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};
int main()
{
    Time t1,t2;
    t1.SetTime(1,2,3);
    t2.SetTime(12,55,56);
    if(t1.is_Greater(t2))
    {
        cout<<"First Greater";
    }
    else
    {
        cout<<"Second Greater";
    }
    cout<<endl;
    return 0;
}