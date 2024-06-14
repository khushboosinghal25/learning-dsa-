#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data =data;
        this->next = NULL;
    }
};
int main() {
    
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    
    return 0;
}
