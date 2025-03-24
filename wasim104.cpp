#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    private:
        int bookid;
        char title[30];
        float price;
    public:
        Book()
        {
            bookid=0;
            strcpy(title,"C & C++ with DSA");
            price=15000.5;
        }
        Book(int id,char t[],float p)
        {
            bookid=id;
            strcpy(title,t);
            price=p;
        }
        void ShowData()
        {
            cout<<"Book ID="<<bookid<<" Title="<<title<<" Price="<<price;
        }
};
int main()
{
    Book b1,b2(102,"C & C++",13000.9);
    b2.ShowData();
    cout<<endl;
    return 0;
}