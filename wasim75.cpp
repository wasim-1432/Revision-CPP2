#include<iostream>
using namespace std;
int Merge_Two_Arrays(int *arr,int *arr1,int size);
int main()
{
    int arr[]={1,2,3,4},arr1[]={5,6,7,8};
    Merge_Two_Arrays(arr,arr1,4);
    cout<<endl;
    return 0;
}
int Merge_Two_Arrays(int *arr,int *arr1,int size)
{
    int i,j,k;
    int *arr2;
    arr2=(int *)malloc(2*size*sizeof(int));
    for(i=0,j=0,k=0;i<size && j<size;k++)
    {
        if(arr[i]<arr1[j])
        {
            arr2[k]=arr[i];
            i++;
        }
        else
        {
            arr2[k]=arr1[j];
            j++;
        }
    }
    while(i<size)
    {
        arr2[k]=arr[i];
        i++;
        k++;
    }
    while(j<size)
    {
        arr2[k]=arr1[j];
        j++;
        k++;
    }
    for(i=0;i<k;i++)
    {
        cout<<arr2[i]<<" ";
    }
}