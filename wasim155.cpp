#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int roll_no;
        char name[30];
        int age;
    public:
        void SetData(int r,char n[],int a)
        {
            roll_no=r;
            strcpy(name,n);
            age=a;
        }
        void ShowData()
        {
            cout<<"\nRoll no="<<roll_no<<" Name="<<name<<" Age="<<age;
        }
        bool operator==(Student s)
        {
            if(roll_no==s.roll_no)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};
int main()
{
    Student s1,s2;
    s1.SetData(102,"Mohd Wasim",20);
    s2.SetData(10,"Mohd Wasim",20);
    s1==s2;     //operator==(s1,s2)
    s1.ShowData();
    cout<<endl;
    return 0;
}