#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        this->data = d;
    }
};
Node* reverseLinkedList(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    else
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while(curr !=NULL)
        {
            forward = curr->next;
            curr->next = prev ; 
            prev = curr;
            curr = forward;
        }
        return prev;
    }
}
int main()
{
    
} 