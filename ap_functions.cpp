#include <iostream>
using namespace std;
int AP(int n){
    int ap=4*n+8;
    return ap;
}
int main(){
    int n;
    cin>>n;
    int ans=AP(n);
    cout<<"answer is "<<ans<<endl;
    return 0;
}