#include <bits/stdc++.h>

using namespace std;

struct tries
{

    struct tries *childrens[26];

    bool isWordEnd;
} * root;

struct tries *getNode()
{
    struct tries *newNode = new tries;

    newNode->isWordEnd = false;
    for (int i = 0; i < 26; i++)
        newNode->childrens[i] = NULL;

    return newNode;
}

void insert(string key)
{
    int index, n;
    struct tries *temp;

    n = key.length();
    temp = root;

    for (int i = 0; i < n; i++)
    {
        index = key[i] - 'a';

        if (!(temp->childrens[index]))
            temp->childrens[index] = getNode();

        temp = temp->childrens[index];
    }

    temp->isWordEnd = true;
}

bool search(string key)
{
    int index, n;
    struct tries *temp;

    n = key.length();
    temp = root;

    for(int i = 0; i < n; i++)
    {
        index = key[i] - 'a';

        if(!(temp->childrens[index]))
            return false;
        
        temp = temp->childrens[index];
    }

    return (temp != NULL && temp->isWordEnd);
}

int main()
{
    root = getNode();

    string keys[] = {"the", "a", "there",
                     "answer", "any", "by",
                     "bye", "their"};
    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; i++)
        insert(keys[i]);

    search("the") ? cout << "Yes\n" : cout << "No\n";
    search("these") ? cout << "Yes\n" : cout << "No\n";

    return 0;
}