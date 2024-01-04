#include <iostream>
#include <vector>
using namespace std;
vector<int> findFactors(int n) 
{
  vector<int>ans;
  for(int i=2;i<n;i++)
  {
    if(n%i==0 )
    {
      while(n!=1)
      {
        ans.push_back(i);
      n=n/i;
      }
    }
      
  }
  return ans;
}
int main(){
    vector<int>ans;
    int n=120;
    ans = findFactors(n);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
}