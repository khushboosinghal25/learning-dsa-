#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n-i+1)
        {
            cout <<n- i +1<< " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
// 1
// 2 2
// 3 3 3
// 4 4 4 4