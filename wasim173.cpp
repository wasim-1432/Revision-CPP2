#include<iostream>
using namespace std;
class Time 
{
    private:
        int hour,min,sec;
    public:
        void SetData(int hour,int min,int sec)
        {
            this->hour=hour;
            this->min=min;
            this->sec=sec;
        }
        void ShowData()
        {
            cout<<hour<<":"<<min<<":"<<sec;
        }
        void Sethour(int hour)
        {
            this->hour=hour;
        }
        void Setmin(int min)
        {
            this->min=min;
        }
        void Setsec(int sec)
        {
            this->sec=sec;
        }
        int Gethour()
        {
            return hour;
        }
        int Getmin()
        {
            return min;
        }
        int Getsec()
        {
            return sec;
        }
};
Time* getTimeArray(int size)
{
    Time *ptr=new Time[size];
    return ptr;
}
int main()
{
    cout<<endl;
    return 0;
}