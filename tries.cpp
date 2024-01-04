#include<iostream>
#include<string>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        data = ch;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isTerminal = false;
    }
};
class Trie{
    public:
    TrieNode* root;
    Trie(){
        root=new TrieNode('\0');
    }
    void insertUtil(TrieNode* root , string word)
    {
        // base case
        if(word.length()==0)
        {
            root->isTerminal=true;
            return;
        }
        // assumption , word will be in CAPS
        int index = word[0]-'A';
        TrieNode* child;
        // present
        if(root->children[index]!=NULL)
        {
            child = root->children[index];
        }
        // absent
        else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertUtil(child,word.substr(1));
    }
    void insertWord(string word)
    {
        insertUtil(root,word);
    }
    bool searchUtil(TrieNode* root, string word)
    {
        // base case
        if(word.length()==0)
        {
            return root->isTerminal;
        }
        int index = word[0]-'A';
        TrieNode* child;

        //present
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        } 
        // Recursion 
        return searchUtil(child,word.substr(1));
    }
    bool searchWord(string word)
    {
        return searchUtil(root,word);
    }
 bool isEmpty(TrieNode* root)
    {
        for(int i=0;i<26;i++)
            if(root->children[i])
                return false;
        
        return true;
    }

    TrieNode* deleteUtil(TrieNode* root, string word)
    {
        if(root == NULL)
            return NULL;
        
        //Last character being processed
        if(word.length() == 0)
        {
            //This will not be a word after removal
            if(root->isTerminal)
                root->isTerminal = false;
            
            //If this is not a prefix of any other word. [not helping to make any other word]
            if(isEmpty(root))
            {
                delete root;
                root = NULL;
            }
            return root;
        }
        
        //Recursion call
        int index = word[0] - 'a';
        root->children[index] = deleteUtil(root->children[index], word.substr(1));
        
        //Backtracking
        //If root has no child (as it's only child got deleted) and it is also not end of any other word
        if(isEmpty(root) && root->isTerminal == false)
        {
            delete root;
            root = NULL;
        }
        
        return root;
    }
    
    TrieNode* deleteWord(string word)
    {
        return deleteUtil(root, word);
    }
};
    
int main(int argc, char const *argv[])
{
    Trie *t = new Trie();
    t->insertWord("ABCD");
    t->insertWord("ABD");
    t->insertWord("ACD");
    t->insertWord("ABFD");
    cout<<"Present or not "<<t->searchWord("ABCD")<<endl;
    cout<<"Present or not "<<t->searchWord("ACD")<<endl;
    cout<<"Present or not "<<t->searchWord("ABC")<<endl;
    cout<<"Present or not "<<t->searchWord("BCD")<<endl;
    return 0;
}
