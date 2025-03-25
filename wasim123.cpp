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
        Time operator++(int)     //Post Increment
        {
            Time temp=*this;
            sec=sec+1;
            min=min+sec/60;
            sec=sec%60;
            hour=hour+min/60;
            min=min%60;
            hour=hour%12;
            return temp;
        }
        Time operator++()   //Preincrement
        {
            sec=sec+1;
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
    Time t1(1,59,59);
    ++t1;
    t1.ShowData();
    cout<<endl;
    return 0;
}