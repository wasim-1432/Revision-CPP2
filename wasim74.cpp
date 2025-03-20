#include<iostream>
#include<string.h>
using namespace std;
int Swap_Two_Array(int *arr1,int *arr2,int size);
int main()
{
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={7,8,9,10,11,12};
    Swap_Two_Array(arr1,arr2,6);
    cout<<endl;
    return 0;
}
int Swap_Two_Array(int *arr1,int *arr2,int size)
{
    int temp[size],i;
    for(i=0;i<=size-1;i++)
    {
        temp[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp[i];
    }
    for(i=0;i<=size-1;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<=size-1;i++)
    {
        cout<<arr2[i]<<" ";
    }
}