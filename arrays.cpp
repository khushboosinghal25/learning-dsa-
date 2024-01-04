#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    cout << "printing the array" << endl;
    // print an array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int first[5]={2,4,5,6,7};
    printarray(first,7);
    int second[34]={34,6,4,6,3,6,8,5,3,6};
    printarray(second,34);
    int third[15]={3,5,6};
    printarray(third,34);
    cout<<endl;
    cout<<"size of second = "<<sizeof(second)/sizeof(int);
    cout<<"size of third = "<<sizeof(third)/sizeof(int)<<endl;
    char ch[5]={'a','v','b','r','p'};
    cout<<ch[3]<<endl;
    int n=5;
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
}