#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string str;
    int key;
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout<<"Enter the key "<<endl;
    cin>>key;
    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        if(ch>='a' && ch<='z')
        {
            ch = (ch-'a'-key+26)%26+'a';
        }
        else if(ch>='A' && ch<='Z')
        {
            ch = (ch-'A'-key+26)%26+'A';
            
        }
        else if(ch>='0' && ch<='9')
        {
            ch = (ch-key-'0'+10)%10 +'0' ;
        }
        str[i]=ch;
    }
    cout<<"decrypted message is \n"<<str;
    return 0;
}
