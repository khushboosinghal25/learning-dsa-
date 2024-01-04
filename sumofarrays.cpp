#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout << "enter the value of n " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i]<<" ";
    }
    int sum =0;
    for (int i = 1; i <= n; i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
    cout << "gldfkm";
}