#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
class cmp
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    }
};
class Solution
{
public:
    void traverse(Node *root, vector<string> &ans, string temp)
    {
        if (!root->left && !root->right)
        {
            ans.push_back(temp);
            return;
        }
        traverse(root->left, ans, temp + '0');
        traverse(root->right, ans, temp + '1');
    }
    vector<string> huffmanCodes(string S, vector<int> f, int n)
    {
        priority_queue<Node *, vector<Node *>, cmp> pq;
        for (int i = 0; i < n; i++)
        {
            Node *temp = new Node(f[i]);
            pq.push(temp);
        }
        while (pq.size() != 1)
        {
            Node *left = pq.top();
            pq.pop();
            Node *right = pq.top();
            pq.pop();
            Node *newNode = new Node(left->data + right->data);
            newNode->left = left;
            newNode->right = right;
            pq.push(newNode);
        }
        vector<string> ans;
        Node *root = pq.top();
        string temp = "";
        traverse(root, ans, temp);
        return ans;}
    };
    int main(int argc, char const *argv[])
    {
        string S;
        cin >> S;
        int n = S.length();
        vector<int> f(n);
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        Solution obj;
        vector<string> ans = obj.huffmanCodes(S, f, n);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        return 0;
    }
