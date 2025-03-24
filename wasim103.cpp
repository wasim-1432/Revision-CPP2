#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;
    public:
        Time(int x,int y,int z)
        {
            hr=x;
            min=y;
            sec=z;
        }
        void ShowData()
        {
            cout<<hr<<":"<<min<<":"<<sec;
        }
};
int main()
{
    Time t1(12,55,56);
    t1.ShowData();
    cout<<endl;
    return 0;
}