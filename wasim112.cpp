#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int roll_no;
        char name[30];
        char mobile[12];
    public:
        Student(int r,char n[],char m[])
        {
            roll_no=r;
            strcpy(name,n);
            strcpy(mobile,m);
        }
        void Display()
        {
            cout<<"Roll No.="<<roll_no<<" Name="<<name<<" Mobile="<<mobile;
        }
};
int main()
{
    Student s1(12,"Mohd Wasim","9621521265");
    s1.Display();
    cout<<endl;
    return 0;
}