#include<bits/stdc++.h>

using namespace std;

struct tries{

    struct tries *childrens[26]; 

    bool isWordEnd; 
}*root;

struct tries* getNode()
{
    struct tries *newNode = new tries;

    newNode->isWordEnd = false;
    for(int i = 0; i < 26; i++)
        newNode->childrens[i] = NULL;

    return newNode;
}

void insert(struct tries* node, string key)
{
    int index, n;
    struct tries *temp;

    n = key.length();
    temp = node;

    for(int i = 0; i < n; i++)
    {
        index = key[i] - 'a';

        if (!(temp->childrens[index]))
            temp->childrens[index] = getNode();

        temp = temp->childrens[index];
    }   

    temp->isWordEnd = true;
}


int main()
{
    root = getNode();
    
    string keys[] = {"the", "a", "there",
                     "answer", "any", "by",
                     "bye", "their"};
    int n = sizeof(keys) / sizeof(keys[0]);

    for(int i = 0; i < n; i++)
        insert(root, keys[i]);

    return 0;
}