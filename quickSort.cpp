#include <iostream>
using namespace std;
int partition(int arr[] , int s, int e)
{
    int p = arr[s];
    int cnt = 0;
    for(int i = s+1;i<=e;i++)
    {
        if(arr[i]<=p)
        {
            cnt++;
        }
    }
    int pivotIndex = s+cnt;
    swap(arr[s],arr[pivotIndex]);
    int i = s,j=e;
    while (i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<p)
        {
            i++;
        }
        while(arr[j]>p)
        {
            j++;
        }
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotIndex;
    
}
void quickSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
   int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
void printArray(int arr[])
{
    for (int i = 0; i <6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {45,5,2,5,1,3};
    quickSort(arr,0,5);
    printArray(arr);
    return 0;
}
