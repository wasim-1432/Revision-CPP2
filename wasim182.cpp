#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
    public:
        void SetRadius(int radius)
        {
            this->radius=radius;
        }
        int GetRadius()
        {
            return radius;
        }
        float GetArea()
        {
            return 3.14*radius*radius;
        }
};
class ThickCircle:public Circle
{
    private:
        int thickness;
    public:
        void SetThickness(int thickness)
        {
            this->thickness=thickness;
        }
        int GetThickness()
        {
            return thickness;
        }
        float GetArea()
        {
            return 3.14*(GetRadius()+thickness)*(GetRadius()+thickness)-3.14*GetRadius()*GetRadius();
        }
        void SetData(int radius,int thickness)
        {
            SetRadius(radius);
            SetThickness(thickness);
        }
        void ShowData()
        {
            cout<<"Area of Circle="<<GetArea();
        }
};
int main()
{
    ThickCircle t1;
    t1.SetData(2,1);
    t1.ShowData();
    cout<<endl;
    return 0;
}