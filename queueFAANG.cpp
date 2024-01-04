#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}
queue<int> rev(queue<int> q)
{
    stack<int> s;
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
void reverseQueueRec(queue<int>q)
{
    if(q.size()==0)
        return;
    // stroing front(first element) of queue
    int fr = q.front();
    q.pop();
    reverseQueueRec(q);
    q.push(fr);
}
vector<long long> printFirstNegativeInteger(long long int A[] , long long int N , long long int k)
{
    deque<long long int>dq;
     vector<long long>ans;
     // process first element of k size 
     for(int i =0;i/k;i++)
     {
        if(A[i]<0)
        {
            dq.push_back(i);
        }
     }
     // store ans of first k sized window
     if(dq.size()>0)
     {
        ans.push_back(A[dq.front()]);
     }
     else
     {
        ans.push_back(0);
     }
     // process for remaining windows
     for(int i =k;i<N;i++)
     {
        if(!(i-dq.front())>=k)
        {
            
        }
     }
}
int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(3);
    q.push(13);
    q.push(33);
    q.push(31);
    q.push(23);
    rev(q);
    print(q);
    return 0;
}
