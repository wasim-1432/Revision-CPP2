#include<iostream>
#include<string.h>
using namespace std;
void Print_Substring_Of_Given_String(char str[],int startIndex,int endIndex=-1);
int main()
{
    char str[]="Mohd Wasim Chaudhary";
    Print_Substring_Of_Given_String(str,3,7);
    cout<<endl;
    return 0;
}
void Print_Substring_Of_Given_String(char str[],int startIndex,int endIndex)
{
    int i;
    if(endIndex==-1)
    {
        endIndex=strlen(str);
    }
    for(i=startIndex;i<endIndex;i++)
    {
        cout<<str[i];
    }
}