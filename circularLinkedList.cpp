#include <iostream>
#include <map>
#include<vector>
using namespace std;
class Node
{
public:
    int d;
    Node *next;
    Node(int d)
    {
        this->d = d;
        this->next = NULL;
    }
};
void insertNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non-empty list
        // assuming element is present in the list
        Node *curr = tail;
        while (curr->d != element)
        {
            curr = curr->next;
        }
        // element found ->curr representing that element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *&tail)
{
    if (tail->d == 0)
    {
        cout << "Nothing";
        return;
    }
    Node *temp = tail;
    do
    {
        cout << tail->d << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "LIST IS EMPTY < ";
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->d != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
bool detectLoop(Node *&head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp!=NULL)
    {
        if (visited[temp] == true)
        {
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return 0;
}
Node *floydDetectLoop(Node *&head)
{
    if (head == NULL)
        return NULL;
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        if (slow == fast)
        {
            cout << "present at" << slow->d;
            return slow;
        }
    }
    return NULL;
}
Node *getStartingNode(Node *&head)
{
    if (head == NULL)
        return NULL;
    Node *intersection = floydDetectLoop(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeLoop(Node *&head)
{
    if (head == NULL)
        return;
    Node *startOfLoop = getStartingNode(head);
    Node *temp = startOfLoop;
    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main(int argc, char const *argv[])
{
    Node *tail = NULL;
    Node *head = NULL;
    insertNode(tail, 5, 3);
    // cout << tail->d;
    insertNode(tail, 3, 5);
    insertNode(tail, 3, 4);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    // deleteNode(tail,5);
    // deleteNode(tail,5);
    // deleteNode(tail,4);
    // deleteNode(tail,3);
    print(tail);
    cout << floydDetectLoop(tail);
    vector<int>ans;
        int arr[] = {1,2,2,3,3,3,3,4};
    for(int i=0;i<8;i++)
    {
        if(arr[i]!=arr[i+1])
            ans.push_back(arr[i]);
        else
            continue;
    }
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
    
}
