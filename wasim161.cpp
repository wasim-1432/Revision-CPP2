#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        char name[40];
        int age;
    public:
        Person(char n[],int a)
        {
            strcpy(name,n);
            age=a;
        }
        void ShowData()
        {
            cout<<"Name="<<name<<" Age="<<age;
        }
};
int main()
{
    Person p1("Mohd Wasim",23);
    p1.ShowData();
    cout<<endl;
    return 0;
}