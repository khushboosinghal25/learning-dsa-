#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[8] = {1, 4, 3, 5, 63, 2, 6, 25};
    int odd[7] = {1, 4, 3, 5, 63, 2, 6};
    swapAlternate(even, 8);
    printArray(even, 8);
    swapAlternate(odd,7);
    printArray(odd,7);
}