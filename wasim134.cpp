#include<iostream>
using namespace std;
class Distance
{
    private:
        int km,m,cm;
    public:
        Distance(int k=0,int m1=0,int c=0)
        {
            km=k;
            m=m1;
            cm=c;
        }
        Distance operator+(Distance D)
        {
            Distance temp;
            temp.km=km+D.km;
            temp.m=m+D.m;
            temp.cm=cm+D.cm;
            return temp;
        }
        void Normalise()
        {
            m=m+cm/100;
            cm=cm%100;
            km=km+m/1000;
            m=m/1000;
        }
        void ShowData()
        {
            cout<<"Km="<<km<<" M="<<m<<" Cm="<<cm;
        }
};
int main()
{
    Distance d1(12,1000,200),d2(34,55,876),d3;
    d3=d1+d2;
    d3.Normalise();
    d3.ShowData();
    cout<<endl;
    return 0;
}