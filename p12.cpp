#include <iostream>
using namespace std;
int main()
{
    int n =4;
    char ch = 'A';
    int i = 1;
    while (i<=n)
    {
        int j=i;
        while(j<2*i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}