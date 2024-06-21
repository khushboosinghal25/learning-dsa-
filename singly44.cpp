#include<iostream>
using namespace  std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this-> data = data;
        this->next=NULL;
    }
    ~Node(){
        int value = this->data ;
        if(this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data" << value<<endl;
    }
};

void insertAtHead(Node* &head , int d)
{
    if(!head)
    {
        Node* temp = new Node(d);
        head = temp;
    }
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail( Node* &tail , int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node* &head)
{
    Node* temp = head;
    while(temp)
    {
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtMiddle(Node* &head , int d)
{
    Node* temp = new Node(d);
    Node* slow = head;
    Node* fast = head;
    while(fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        }
        temp->next = slow->next;
        slow->next = temp;
        
}
void insertAtPosition(Node* &head ,Node* &tail, int d , int position){
    int cnt = 1;
    Node* temp = head;
    if(position==1)
    {
        Node* newNode = new Node(d);
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* newNode = new Node(d);
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(Node* head , int position)
{
    if(position==1)
    {
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    else{
        Node* curr =head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;  
        }
        prev->next= curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    Node* tail = node1;
    insertAtHead(node1,0);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtMiddle(node1 , 35);
    insertAtPosition(node1,tail , 45 , 4);
    insertAtPosition(node1 ,tail, 45 , 1);
    print(node1);
    return 0;
}