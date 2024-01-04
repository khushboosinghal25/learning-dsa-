#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
bool searchs(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
            return 1;
    }
    return 0;
}
void linearSearch(int arr[], int key)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == key)
        {
            cout << "present" << endl;
            return;
        }
        else
        {
            cout << "nope" << endl;
            return;
        }
    }
}
int main()
{
    int arr[10] = {5, 6, 7, 8, 6, 3, 2, 4, 7, 2};
    // whether 1 is present in it or not ?
    cout << "Enter the element to search for " << endl;
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "key is present " << endl;
    }
    else
    {
        cout << "key is not present " << endl;
    }
    bool founds = searchs(arr, 10, key);
    if (founds)
    {
        cout << "key is present " << endl;
    }
    else
    {
        cout << "key is not present " << endl;
    }
    linearSearch(arr, 1);
    return 0;
}