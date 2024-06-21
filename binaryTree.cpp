#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildTree(Node *root)
{
    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}
vector<int> reverseLevelOrderTraversal(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            ans.push_back(temp->data);
            if (temp->right)
                q.push(temp->right);
            if (temp->left)
                q.push(temp->left);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
void preOrder(Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void inorder(Node *root)
{
    if (!root)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node *buildFromLevelOrder(Node *root)
{
    queue<Node *> q;
    root = new Node(1);
    q.push(root);
    int i = 2;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (i <= 10)
        {
            temp->left = new Node(i);
            q.push(temp->left);
            i++;
            if (i <= 10)
            {
                temp->right = new Node(i);
                q.push(temp->right);
                i++;
            }
        }
    }
    int main()
    {
        Node *root = new Node(10);
        root = buildTree(root);
        cout << "Level order traversal of binary tree is \n";
        levelOrderTraversal(root);
        cout << "Reverse level order traversal of binary tree is \n";
        vector<int> ans = reverseLevelOrderTraversal(root);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        return 0;
    }
