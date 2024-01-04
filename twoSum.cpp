#include<iostream>
using namespace std;
int twoSum(int target , int nums[])
{
    int n = 5;
    for(int i = 0;i<n;i++)
    {
        for(int j= 0;j<n-i-1;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                cout<<i<<" "<<j;            }
        }
    }
}
int main()
{
    int nums[] = {5,31,1,52,3};
    int n = 5;
    int target = 6;
    cout<<twoSum(target , nums);
}