#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10], c1, c2, c3;
    cout << "\n Enter the 4 bits";
    cin >> a[3];
    cin >> a[5];
    cin >> a[6];
    cin >> a[7];
    a[1] = a[3] ^ a[5] ^ a[7];
    a[2] = a[3] ^ a[6] ^ a[7];
    a[4] = a[5] ^ a[5] ^ a[7];
    for (int i = 1; i < 8; i++)
        cout << "\t " << a[i];
    cout << "\n Enter the 7 bits ";
    for (int i = 1; i < 8; i++)
    {
        cin >> b[i];
    }
    c1 = b[1] ^ b[3] ^ b[5] ^ b[7];
    c2 = b[2] ^ b[3] ^ b[6] ^ b[7];
    c3 = b[4] ^ b[5] ^ b[6] ^ b[7];
    int p = c1 * 1 + c2 * 2 + c3 * 4;
    if (p == 0)
    {
        cout << "\n THERE IS NO ERROR IN THE DATA";
    }
    else
    {
        cout << " \n There is no error in position" << p;
        if (b[p] == 0)
        {
            b[p] = 1;
        }
        else
        {
            b[p] = 0;
        }
    }

    return 0;
}