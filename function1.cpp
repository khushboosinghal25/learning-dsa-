#include <iostream>
using namespace std;
int power(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
int main()
{
   int ans=power();
   cout<<"answer is "<<ans<<endl;
   int answ=power();
   cout<<"answer is "<<answ<<endl;
   int answe=power();
   cout<<"answer is "<<answe<<endl;
    return 0;
}