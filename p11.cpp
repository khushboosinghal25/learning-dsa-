#include <iostream>
using namespace std;
int main()
{
    int n =4;
    char ch = 'A';
    int i = 1;
    while (i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}