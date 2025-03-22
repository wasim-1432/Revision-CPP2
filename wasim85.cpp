#include<iostream>
using namespace std;
class Circle
{
    private:
        int r;
    public:
        void SetData(int x)
        {
            r=x;
        }
        float Calculate_Area_Of_Circl()
        {
            return 3.14*r*r;
        }
        float Calculate_Circumference_Of_Circle()
        {
            return 2*3.14*r;
        }
        void ShowData()
        {
            cout<<"Area of Circle is="<<Calculate_Area_Of_Circl()<<endl;
            cout<<"Circumference of circle is="<<Calculate_Circumference_Of_Circle();
        }
};
int main()
{
    Circle c1;
    c1.SetData(2);
    c1.ShowData();
    cout<<endl;
    return 0;
}