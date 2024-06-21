#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* link;
    Node(int n){
        data = n;
        link = NULL;
    }
};

class Stack{
    Node* top;
    public:
    Stack(){
        top = NULL;
    }
    void push(int data){
            Node* temp = new Node(data);
            if(!temp){
                cout<<"\n Stack Overflow";
                exit(1);
            }
            temp->data = data;
            temp->link = top;
            top = temp;
    }
    void pop(){
        Node* temp;
        if(!top){
            cout<<"Stack underflow \n";
            exit(1);
        }
        else{
            temp = top;
            top = top->link;
            delete temp;
        }
    }
};
int main() {
    
    return 0;
}
