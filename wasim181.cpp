#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        char name[30];
        int age;
    protected:
        void SetName(char name[])
        {
            strcpy(this->name,name);
        }
        void SetAge(int age)
        {
            this->age=age;
        }
        char *GetName()
        {
            return name;
        }
        int GetAge()
        {
            return age;
        }
};
class Employee:public Person
{
    private:
        float salary;
    protected:
        void SetSalary(float salary)
        {
            this->salary=salary;
        }
    public:
        float GetSalary()
        {
            return salary;
        }
        void SetEmployee(char nam1[],int age,float salary)
        {
            SetName(nam1);
            SetAge(age);
            SetSalary(salary);
        }
        void ShowEmployee()
        {
            cout<<"Name="<<GetName()<<" Age="<<GetAge()<<" Salary="<<salary<<endl;;
        }
};
int main()
{
    Employee obj1;
    obj1.SetEmployee("Mohd Wasim",20,20000000.9);
    obj1.ShowEmployee();
    cout<<endl;
    return 0;
}