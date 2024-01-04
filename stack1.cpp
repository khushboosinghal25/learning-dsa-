#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }
    void push(int element)
    {
        if (size - top >1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int peek()
    {
        if(top>=0&& top<size)
        return arr[top];
        else
        {
            cout<<"stack empty"<<endl;
        }
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
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
    // cout<<st.pop()<<endl;
    return 0;
}