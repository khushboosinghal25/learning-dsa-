#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
   

    while (i < n)
    {
        int j = 1;
        while (j <n)
        { char ch='A';
            char value = ch + i + j - 1;
            cout << value;
            j++;
        }cout << endl;
    i++;
    }
    
}
