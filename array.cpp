#include<iostream>
using namespace std;

int main() {
    int number[15]={1,2,3,4,5,6,7,8,9,3,5,6,7,56,63};
    cout<<"value at index "<<number[15]<<endl;
    cout<<"value at index "<<number[20]<<endl;
    // initialise an array
    int second[3]={5,7,11};
    cout<<"value at index "<<second[1]<<endl;
    cout<<"Everything is fine. "<<endl<<endl;
    int arr[25]={3,6};
    //print an array
    int n=15;
    cout<<"printing an array "<<endl;
    for(int i=0;i<n;i++){
        cout<<number[i]<<" ";
    }
}