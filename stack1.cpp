#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int size;
    int *arr;
    int top;
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
    }
    void push(int element){
        if(top==size-1)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        arr[++top]=element;
        
    }
    void pop(){
        if(top==-1)
          {  cout<<"Underflow"<<endl;
            return;}
        top--;
    }
    int peek(){
        if(top==-1)
        {  cout<<"Stack is empty"<<endl;}
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }
};
int main()
{ /*stack<int> st;
     st.push(2);
     st.push(5);
     st.push(5);
     st.push(5);
     st.push(53);
     st.push(4);
     st.push(5);
     st.pop();
     cout<<" top element is "<<st.top()<<endl;
     for(int i=0;i<st.size();i++)
     {
         cout<<st.top()<<" ";
         top++;
     }
     if(st.empty())
     {
         cout<<"empty "<<endl;
     }
     else
     {
         cout<<"not empty "<<endl;
     }*/
    Stack st(5);
    st.push(6);
    st.push(64);
    st.push(61);
    st.push(16);
    st.push(16);
    st.push(16);
    st.push(16);
    cout << st.peek() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    // cout<<st.pop( )<<endl;
    return 0;
}