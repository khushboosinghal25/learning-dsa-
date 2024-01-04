#include<iostream>
using namespace std;
class  Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data= data;
        this->next = NULL;
    }
    void insertAtHead(Node* head , int d)
    {
        // new node create
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    void insertAtTail(Node* tail , int d)
    {
        Node* temp  = new Node(d);
        tail->next = temp;
        tail=tail->next;
    }
    void print(Node* &head)
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp;
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Node* n1 = new Node(6);
    Node* n2 = new Node(6);
    cout<<n1->data<<endl;
    cout<<&n1;
    cout<<n1->next<<endl;
    return 0;
}
++