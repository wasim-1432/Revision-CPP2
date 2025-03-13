#include<iostream>
using namespace std;
int Sort_Array(int arr[],int size,bool n=0);
int main()
{
    int size,i;
    cout<<"Enter the size of the array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the "<<size<<" elements for the array\n";
    for(i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }
    bool n;
    cout<<"Enter 1 for Ascending/0 for descending order\n";
    cin>>n;
    Sort_Array(arr,size,n);
    cout<<endl;
    return 0;
}
int Sort_Array(int arr[],int size,bool n)
{
    int i;
    if(n==1)
    {
        int round,i;
        for(round=0;round<=size-2;round++)
        {
            for(i=0;i<=size-round-1;i++)
            {
                if(arr[i]>=arr[i+1])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        cout<<"Sorted Array in Ascending oredr:\n";
        for(i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        int round,i;
        for(round=1;round<size-1;round++)
        {
            for(i=0;i<=size-round-1;i++)
            {
                if(arr[i]<arr[i+1])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        cout<<"Sorted Array in Descending Order:\n";
        for(i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}