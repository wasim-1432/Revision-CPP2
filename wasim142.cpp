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
        friend ostream& operator<<(ostream&,Time);
        friend istream& operator>>(istream&,Time&);
};
ostream& operator<<(ostream& dout,Time X)
{
    dout<<X.hour<<":"<<X.min<<":"<<X.sec;
    return dout;
}
istream& operator>>(istream& din,Time &X)
{
    din>>X.hour>>X.min>>X.sec;
    return din;
}
int main()
{
    Time c1,c2;
    cout<<"Enter the value of hour,min & sec\n";
    cin>>c1;   //operator>>(cin,c1);
    cout<<c1;     //operator<<(cout,c1);
    cout<<endl;
    return 0;
}