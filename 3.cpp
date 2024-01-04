#include<iostream>
using namespace std;
int main()
{int a,z ,A,Z;
    // int a;
    // int b;
    // cout<<"Enter the value of a"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b"<<endl;
    // cin>>b;
    // if(a>b)
    // {
    //     cout<<" \t a is great";
    // }
    // else
    // cout<<"a is not great";
    // if(a>0)
    // cout<<"a is positive";
    // else if(a<0){
    //     cout<<"a is negative";}
    //     else{
    //     cout<<"a=0";
    // }
    char ch;
    cout<<"enter the character";
    cin>>ch;
    if(ch>=a && ch<=z)
    {
        cout<<"ch is lowercase";
    }
    else if(ch>=A and ch<=Z)
       {
        cout<<"ch is uppercase";
    }
    else if(ch>=0 and ch<=9)
    cout<<"ch is numeric";
    else
    cout<<"not defined";
    return 0;
}