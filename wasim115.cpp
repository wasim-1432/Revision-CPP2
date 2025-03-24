#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
    public:
        Circle()
        {
            radius=0;
        }
        Circle(int r)
        {
            radius=r;
        }
        void Display()
        {
            cout<<"Radius of Circle is="<<radius;
        }
};
int main()
{
    Circle c1(2);
    c1.Display();
    cout<<endl;
    return 0;
}