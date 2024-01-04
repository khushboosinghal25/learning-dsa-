#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int oneIteration(int arr[], int n)
{
    vector<int> ans;
    int mx = INT_MIN;
    int smx = INT_MIN;
    int tmx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            tmx = smx;
            smx = mx;
            mx = arr[i];
        }
        else if (arr[i] > smx)
        {
            tmx = smx;
            smx = arr[i];
        }
        else if (arr[i] > tmx)
        {
            tmx = arr[i];
        }
    }
    int ans2 = mx+tmx+smx;

    return ans2;
}
int main(int argc, char const *argv[])
{
    int arr[6] = {5, 31, 35, 756, 1, 34};
    int ans = oneIteration(arr, 6);
    cout << ans;

    return 0;
}
