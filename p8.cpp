#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int i = 1;
    while (i<=n)
    {
        int j=i;
        while(j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    
}