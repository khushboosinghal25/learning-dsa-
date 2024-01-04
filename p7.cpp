#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int row = 1;
    // while(row<= n )
    // {
    //     int col = 1;
    //     int value = row;
    //     while (col<= row)
    //     {
    //         cout<<value<<" ";
    //         value++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }
    int i = 1;
    while (i<=n)
    {
        int j=i;
        while(j<2*i)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
// 1
// 2 3
// 3 4 5
// 4 5 6 7