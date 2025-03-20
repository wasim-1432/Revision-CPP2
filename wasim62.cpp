#include<iostream>
#include<string.h>
using namespace std;
char *Sort_Given_Strings(char str[][20],int n,bool asc);
int main()
{
    int n;
    cout<<"Enter the number of strings\n";
    cin>>n;
    char str[n][20];
    cout<<"Enter any string\n";
    int i,l;
    for(i=0;i<=n;i++)
    {
        fgets(str[i],20,stdin);
        for(l=0;str[i][l];l++);
        str[i][l-1]='\0';
    }
    bool asc;
    cout<<"Enter 1 for ascending order or 0 for descending order"<<endl;
    cin>>asc;
    Sort_Given_Strings(str,n,asc);
    cout<<endl;
    return 0;
}
char *Sort_Given_Strings(char str[][20],int n,bool asc)
{
    int i,j,round;
    char temp[100];
    if(asc==true)
    {
        for(round=1;round<=n-1;round++)
        {
            for(i=0;i<=n-round;i++)
            {
                if(strcmp(str[i],str[i+1])>0)
                {
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[i+1]);
                    strcpy(str[i+1],temp);
                }
            }
        }
        cout<<"Given Strings In Ascending Order:"<<endl;
        for(i=0;i<=n;i++)
        {
            cout<<str[i]<<endl;
        }
    }
    if(asc==false)
    {
        for(round=0;round<=n-2;round++)
        {
            for(i=0;i<=n-round-1;i++)
            {
                if(strcmp(str[i],str[i+1])<0)
                {
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[i+1]);
                    strcpy(str[i+1],temp);
                }
            }
        }
        cout<<"Given Strings In descending Order:"<<endl;
        for(i=0;i<=n;i++)
        {
            cout<<str[i]<<endl;
        }
    }
}