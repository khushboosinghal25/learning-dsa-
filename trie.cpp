#include <bits/stdc++.h>
using namespace std;
class TrieNode
{
public:
    char data;
    bool isTerminal;
    TrieNode *children[26];
    TrieNode(char data)
    {
        this->data = data;
        isTerminal = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
    }
};
class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode* root , string word)
    {
        if(word.size()==0){
            root->isTerminal = true;
            return;
        }
        TrieNode* child;
        int index = word[0]-'A';
        if(root->children[index]!=NULL)
        {
            child = root->children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        return insertUtil(child , word.substr(1));
    }
    void insertWord(string word)
    {
        return insertUtil( root ,word);
    }
    bool searchUtil(TrieNode* root , string word){
       if(word.length()==0)
        return root->isTerminal;
        int index = word[0] - 'A';
        TrieNode* child;
        if(root->children[index]!=NULL)
        {child = root->children[index]}
        else
            return false;
        return searchUtil(child , word.substr(1));

    }
    bool searchWord(string word){
        return searchUtil(root,word);
        }

};
int main()
{

    return 0;
}
