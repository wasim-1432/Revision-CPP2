#include<iostream>
#include<string.h>
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
class Shape
{
    private:
        char ShapeName[20];
    public:
        void SetShapeName(char ShapeName[])
        {
            strcpy(this->ShapeName,ShapeName);
        }
        char *GetShapeName()
        {
            return ShapeName;
        }
};
class StraightLine:public Shape
{
    private:
        Coordinate c1,c2;
    public:
        void SetLine(Coordinate c1,Coordinate c2)
        {
            this->c1=c1;
            this->c2=c2;
        }
        double GetDistance()
        {
            return c1.GetDistance(c2);
        }
        void ShowLine()
        {
            c1.ShowData();
            cout<<endl;
            c2.ShowData();
        }
};
int main()
{
    StraightLine s1;
    Coordinate c1,c2;
    c1.SetCoordinate(1,2);
    c2.SetCoordinate(2,3);
    s1.SetLine(c1,c2);
    s1.ShowLine();
    cout<<endl;
    return 0;
}