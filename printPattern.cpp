#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int count = 0;
    int arr[] = {1,3,5,7,9};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[(count+j)%n];
        }
        count++;
        cout<<endl;
    }
    return 0;
}
