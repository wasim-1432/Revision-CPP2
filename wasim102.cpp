#include<iostream>
#include<string>
using namespace std;
class Customer
{
    private:
        int cust_id;
        string name;
        string email;
        string mobile;
    public:
        Customer()
        {
            cust_id=0;
            name="Mohd Wasim";
            email="wasim.ahmad0661@gmail.com";
            mobile="919621521265";
        }
        Customer(int id,string n,string e,string m)
        {
            cust_id=id;
            name=n;
            email=e;
            mobile=m;
        }
        void ShowData()
        {
            cout<<"Cunstomer Id="<<cust_id<<" Name="<<name<<" Email="<<email<<" Mobile="<<mobile<<endl;
        }
};
int main()
{
    Customer c1,c2(12,"Mohd Fahim","fahim.ahmad0661@gmail.com","919305481282");
    c2.ShowData();
    cout<<endl;
    return 0;
}
