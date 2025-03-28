#include<iostream>
#include<string.h>
using namespace std;
class Shape
{
    private:
        char ShapeName[30];
    public:
        void SetShapeName(char ShapeName[])
        {
            strcpy(this->ShapeName,ShapeName);
        }
        char *GetShapeName()
        {
            return ShapeName;
        }
        virtual int Area()=0;
};
class Rectangle:public Shape
{
    private:
        int length,breadth;
    public:
        void SetLength(int length)
        {
            this->length=length;
        }
        void SetBreadth(int breadth)
        {
            this->breadth=breadth;
        }
        int GetLength()
        {
            return length;
        }
        int GetBreadth()
        {
            return breadth;
        }
        int Area()
        {
            return length*breadth;
        }
        void Display()
        {
            cout<<"Area is="<<Area();
        }
};
class Square:public Shape
{
    private:
        int side;
    public:
        void SetSide(int side)
        {
            this->side=side;
        }
        int GetSide()
        {
            return side;
        }
        int Area()
        {
            return side*side;
        }
};
int main()
{
    Rectangle r1;
    r1.SetLength(2);
    r1.SetBreadth(3);
    r1.Area();
    r1.Display();
    cout<<endl;
    return 0;
}