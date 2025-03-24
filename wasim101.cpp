#include<iostream>
using namespace std;
class Cuboid
{
    private:
        int length,breath,height;
    public:
        Cuboid(int x,int y,int z)
        {
            length=x;
            breath=y;
            height=z;
        }
        void ShowData()
        {
            cout<<"Length="<<length<<" Breath="<<breath<<" Height="<<height<<endl;
        }
};
int main()
{
    Cuboid c1(2,3,4);
    c1.ShowData();
    cout<<endl;
    return 0;
}