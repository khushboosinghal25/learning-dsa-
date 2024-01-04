#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid=(start)+(end-start)/2;
    }
    return 3;
}
int main()
{
    int odd[7] = {234, 54, 2, 43, 368, 25, 2};
    int even[6] = {32, 22, 12, 11, 3, 2};
    int index2=binarysearch(even,6,2);
    cout<<"index of 2 is "<<index2<<endl;
    int index3=binarysearch(odd,7,43);
    cout<<"index of 43 is "<<index3<<endl;
}