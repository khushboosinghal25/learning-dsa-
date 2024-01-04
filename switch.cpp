#include<iostream>
using namespace  std;
int main()
{
    int ch='1';
    cout<<endl;
    int num=1;
    switch(ch){
        case 1:cout<<"First "<<endl;
        break;
        case '1':switch(num){
            case 1: cout<<"Value of num is "<<num<<endl;
            break;
        }
        cout<<"Character one "<<endl;
        break;
        // default : cout<<"It is default case"<<endl;
        
    }
    cout<<endl;
} 
