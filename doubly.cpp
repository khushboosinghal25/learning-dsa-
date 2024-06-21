#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data ; 
    Node* prev ; 
    Node* next;
    Node(int d)
    {
        this->data = d;
        next =NULL;
        prev = NULL ;
    }

};
void insertAtHead(Node* &head , int d)
{
    Node* temp = new Node(d);
    if(head==NULL){
        head=temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
    return;
}
void insertAtTail(Node* &tail , int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail= temp;
    return;
}
void insertAtPosition(Node* head , Node* &tail , int d , int position)
{
    Node* newNode = new Node(d);
    if(position==1)
    {
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    if(newNode->next == NULL){
        tail = newNode;
        }
        return;
}
void print(Node* head)
{
    Node* temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp  = temp->next;
    }
    cout<<endl;
}
int main() {
    Node* node = new Node(10);
    cout << node->data << endl ;
    Node* tail = node;
    insertAtHead(node,20);
    insertAtTail(tail,20);
    print(node);
    return 0;
}
