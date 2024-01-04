#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertAtHead(Node* &head,int d)
{
    //new node creation
    Node* temp =new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void inserAtPosition(Node* &head,Node* &tail,int position , int d)
{
    if(position==1)
    {
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    // inserting at last pos
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteNode(int position,Node* &head)
{
    // deleting first and start node
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        
        delete(temp);
    }
    else
    {
        // 
        int cnt=1;
        Node* curr=head;
        Node* prev=NULL;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next = curr->next;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(1);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    // head pointed to node1
    Node* head=node1;
    Node* tail=node1;
    insertAtHead(head,1);
    insertAtHead(head,1);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,4);
    insertAtHead(head,5);
    Node* temp=tail;
    while(head!=NULL)
    {
        if(head->data!=head->next->data)
        {
            cout<<head->data;
            head=head->next;
        }
        else
        {
            head=head->next;
        }
    }
    print(head);
}