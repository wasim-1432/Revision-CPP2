#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,sec;
    public:
        void SetData(int hour,int min,int sec)
        {
            this->hour=hour;
            this->min=min;
            this->sec=sec;
        }
        void ShowData()
        {
            cout<<hour<<":"<<min<<":"<<sec<<endl;
        }
        bool operator>(Time T)
        {
            if(hour>T.hour)
            {
                return true;
            }
            else if(hour<T.hour)
            {
                return false;
            }
            else if(min>T.min)
            {
                return true;
            }
            else if(min<T.min)
            {
                return false;
            }
            else if(sec>T.sec)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};
Time* Get_Time_Array(int size)
{
    Time *ptr=new Time[size];
    return ptr;
}
void Sort_Time_Array(Time T[],int size)
{
    int round,i;
    Time temp;
    for(round=1;round<=size-1;round++)
    {
        for(i=0;i<=size-round-1;i++)
        {
            if(T[i]>T[i+1])
            {
                temp=T[i];
                T[i]=T[i+1];
                T[i+1]=temp;
            }
        }
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the objects"<<endl;
    cin>>size;
    Time *times=Get_Time_Array(size);
    for(int i=0;i<size;i++)
    {
        int hour,min,sec;
        cout<<"Enter the hour,min & sec for Time "<<i+1<<endl;
        cin>>hour>>min>>sec;
        times[i].SetData(hour,min,sec);
    }
    cout<<endl<<"Before Swapping"<<endl;
    for(int i=0;i<size;i++)
    {
        times[i].ShowData();
    }
    Sort_Time_Array(times,size);
    cout<<endl<<endl<<"After Swapping"<<endl;
    for(int i=0;i<size;i++)
    {
        times[i].ShowData();
    }
    cout<<endl;
    return 0;
}