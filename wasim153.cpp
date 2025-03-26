#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x,y;
    public:
        Coordinate():x(0),y(0){}
        Coordinate(int a,int b):x(a),y(b){}
        Coordinate operator,(Coordinate C)
        {
            return C;
        }
        void ShowData()
        {
            cout<<"\n("<<x<<","<<y<<")";
        }
};
int main()
{
    Coordinate c1(2,3),c2(-1,2),c3;
    c3=(c1,c2);
    c3.ShowData();
    cout<<endl;
    return 0;
}