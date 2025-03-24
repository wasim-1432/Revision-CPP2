#include<iostream>
#include<string.h>
using namespace std;
class Room
{
    private:
        int room_no;
        char room_type[30];
        char is_AC[20];
    public:
        Room(int rno,char rt[],char isac[])
        {
            room_no=rno;
            strcpy(room_type,rt);
            strcpy(is_AC,isac);
        }
        void ShowData()
        {
            cout<<"Room No="<<room_no<<" Room Type="<<room_type<<" Is_AC="<<is_AC;
        }
};
int main()
{
    Room r1(12,"Single Room","AC");
    r1.ShowData();
    cout<<endl;
    return 0;
}