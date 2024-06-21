#include <iostream>
using namespace std;
void fun(int n)
{
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout <<"*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
int main()
{
    int n = 4;
    int i = 1;
    cout<<endl;
    fun(8);
}