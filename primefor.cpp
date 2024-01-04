#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isPrime=1;
    cout<<"enter the value of n ";
    cin>>n;
    for (int i = 2; i <n; i++)
    {
        //rem=0, not prime
        if (n%i==0)
        {
            // cout<<"Not a prime number"<<endl;
            isPrime=0;
            break;
        }
    if(isPrime==0){
        cout<<"Not a prime number"<<endl;
    }
    else
    cout<<"is a prime number"<<endl;
    break;
        
    }
    
}