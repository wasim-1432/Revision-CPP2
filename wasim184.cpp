#include<iostream>
#include<string.h>
using namespace std;
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
