#include<iostream>
using namespace std;
int getSum(int arr[] , int n )
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
        return arr[0];
    else{
        int remaining = getSum(arr+1,n-1);
        int sum = arr[0]+remaining;
        return sum;
    }

}
 int main(int argc, char const *argv[])
 {
    int arr[] = {1,2,4,5,3};
    int n = 5;
    // int sum =0;
    int sum =getSum(arr,n);
    cout<<sum;
 }