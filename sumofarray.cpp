#include<iostream>
using namespace std;
int sumarr(int arr[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"sum is "<<sumarr(a,n);
    return 0;
} 