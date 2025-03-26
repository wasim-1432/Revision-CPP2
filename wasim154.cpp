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
        friend ostream& operator<<(ostream &,Coordinate);
        friend istream& operator>>(istream &,Coordinate &);
};
ostream& operator<<(ostream &dout,Coordinate X)
{
    dout<<"("<<X.x<<","<<X.y<<")";
    return dout;
}
istream& operator>>(istream &din,Coordinate &X)
{
    din>>X.x>>X.y;
    return din;
}
int main()
{
    Coordinate c1(2,3),c2(-1,2),c3,c4;
    //c3=(c1,c2);
    cin>>c4;      //operator>>(cin,c4)
    cout<<c4;    //operator<<(cout,c3)
    //c3.ShowData();
    cout<<endl;
    return 0;
}