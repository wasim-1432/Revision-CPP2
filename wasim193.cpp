#include<iostream>
#include<string.h>
using namespace std;
class Actor
{
    private:
        char name[30];
        int age;
    public:
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
class TVActor:virtual public Actor
{
    private:
        int number;
    public:
        void SetNumber(int number)
        {
            this->number=number;
        }
        int GetNumber()
        {
            return number;
        }
        void SetTVActor(char name[],int age,int number)
        {
            SetName(name);
            SetAge(age);
            this->number=number;
        }
        void ShowTVActor()
        {
            cout<<"Name="<<GetName()<<" Age="<<GetAge()<<" Number="<<number;
        }
};
class MovieActor:virtual public Actor
{
    private:
        int number_of_movies;
    public:
        void SetNumber_of_movies(int number_of_movies)
        {
            this->number_of_movies=number_of_movies;
        }
        int GetNumber_of_movies()
        {
            return number_of_movies;
        }
        void SetMovieActor(char name[],int age,int number_of_movies)
        {
            SetName(name);
            SetAge(age);
            SetNumber_of_movies(number_of_movies);
        }
        void ShowMovieActor()
        {
            cout<<"Name="<<GetName()<<" Age="<<GetAge()<<" Number of Movies="<<number_of_movies;
        }
};
class AllScreenActor:public TVActor,public MovieActor
{
    public:
        void SetActorData(char name[],int age,int number,int number_of_movies)
        {
            SetName(name);
            SetAge(age);
            SetNumber(number);
            SetNumber_of_movies(number_of_movies);
        }
        void ShowData()
        {
            cout<<"Name="<<GetName()<<" Age="<<GetAge()<<"Number of TV projects="<<GetNumber()<<" Number of Movies="<<GetNumber_of_movies();
        }
};
int main()
{
    AllScreenActor t1;
    t1.SetActorData("Mohd Wasim",20,22,34);
    t1.ShowData();
    cout<<endl;
    return 0;
}