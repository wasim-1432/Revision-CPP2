#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,sec;
    public:
        void SetData(int x,int y,int z)
        {
            hour=x;
            min=y;
            sec=z;
        }
        void ShowData()
        {
            cout<<hour<<":"<<min<<":"<<sec;
        }
};
int main()
{
    Time t1;
    t1.SetData(12,30,55);
    t1.ShowData();
    cout<<endl;
    return 0;
}