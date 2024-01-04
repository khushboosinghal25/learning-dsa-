#include <iostream>
using namespace std;
int main()
{
    int n =4;
    int i = n;
    while (i>=1)
    {
        int j=i;
        while(j>0)
        {
            char ch ='A'+j-1;
            cout<<ch<<" ";
            j--;
        }
        cout<<endl;
        i--;
    }
    
}
// D C B A
// C B A
// B A
// A