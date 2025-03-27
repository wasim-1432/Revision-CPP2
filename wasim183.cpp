#include<iostream>
#include<math.h>
using namespace std;
class Coordinate
{
    private:
        int x,y;
    public:
        double GetDistance()
        {
            return sqrt(x*x+y*y);
        }
        double GetDistance(Coordinate C)
        {
            return sqrt((x-C.x)*(x-C.x)+(y-C.y)*(y-C.y));
        }
        void SetCoordinate(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        void ShowData()
        {
            cout<<"\n("<<x<<","<<y<<")"<<endl;
        }
};
int main()
{
    Coordinate c1,c2;
    c2.SetCoordinate(1,2);
    double distance=c2.GetDistance();
    cout<<"Distance is="<<distance<<endl;
    cout<<endl;
    return 0;
}