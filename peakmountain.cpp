#include <iostream>
#include<vector>
using namespace std;
int peakIndexMountainArray(vector<int>&arr)
{
    int s=0;
    int ans=-1;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2; 
    }
    return s;
}
int main()
{
    int arr[7]={34,3,1,3,5,7,5};
    cout<<peakIndexMountainArray(7,arr);
    return 0;
    }