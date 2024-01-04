#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    int i = 0;
    int minIndex = i;
    for(i=0;i<n;i++)
    {
        for(int j =0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void bubble(int arr[] , int n)
{
    int i = 0;
    int minIndex = i;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarray(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {14,53,12,454,74};
    printarray(arr,5);
    int n = 5;
    bubble(arr,5);
    printarray(arr,5);
}