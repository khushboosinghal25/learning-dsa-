#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cout << "enter the element to search for : " << endl;
    cin >> key;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == key)
        {
            cout<<"key "<<key<< " is present";
        }
    }
    cout<<key<<" not present";
    
}