#include<bits/stdc++.h>
using namespace std;
int sqrtInteger(int n)
{
    int s=0 , e=n;
    long long int ans = 0;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(mid*mid ==n)return mid;
        else if(mid*mid<n)
        {
            s=mid+1;
            ans= mid;
        }
        else 
            e=mid-1;
    }
    return ans;
}
double morePrecision(int n , int precision , int ans)
{
    double factor = 1;
    double ansd =  ans;
    for(int i=0;i<precision;i++)
    {
        factor = factor/10;
        for(double j=ansd;j*j<n;j+=factor)
        {
            ansd = j;
        }
    }
    return ansd;

}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<sqrtInteger(n)<<endl;
    int ans = sqrtInteger(n);
    cout<<morePrecision(n,4,ans)<<endl;
    return 0;
}
