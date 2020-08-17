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

    for (int i = 0; i < n; i++)
    {
        index = key[i] - 'a';

        if (!(temp->childrens[index]))
            return false;

        temp = temp->childrens[index];
    }

    return (temp != NULL && temp->isWordEnd);
}

void remove(string key)
{
    int n, index, lastindex = 0;
    struct tries *temp, *last;

    last = NULL;
    n = key.length();
    temp = root;

    for(int i = 0; i < n; i++)
    {
        index = key[i] - 'a';

        if(!(temp->childrens[index]))
            return;
        
        temp = temp->childrens[index];

        if(temp->isWordEnd)
        {
            last = temp;
            lastindex = i + 1;
        }
    }

    if(!temp->isWordEnd)
        return;
    else
        temp->isWordEnd = false;

    if(last)
    {
        for(int i = 0; i < 26; i++)
        {
            if(temp->childrens[i])
                return;
        }

        for(int i = lastindex; i < n; i++)
        {
            index = key[i] - 'a';
            temp = last->childrens[index];
            delete()
        }

    }
}

int main()
{
    root = getNode();

    string keys[] = {"the", "there",
                     "answer", "any", "by",
                     "bye", "their", "c", "cat", "catapiller"};
    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; i++)
        insert(keys[i]);

    // Case 0
    search("idontexist") ? cout << "Yes\n" : cout << "No\n";
    remove("idontexist");
    search("idontexist") ? cout << "Yes\n" : cout << "No\n";

    // Case 1
    search("the") ? cout << "Yes\n" : cout << "No\n";
    remove("the");
    search("the") ? cout << "Yes\n" : cout << "No\n";

    // Case 2
    search("bye") ? cout << "Yes\n" : cout << "No\n";
    remove("bye");
    search("bye") ? cout << "Yes\n" : cout << "No\n";

    // Case 4
    search("cat") ? cout << "Yes\n" : cout << "No\n";
    remove("cat");
    search("cat") ? cout << "Yes\n" : cout << "No\n";

    // Case 3
    search("answer") ? cout << "Yes\n" : cout << "No\n";
    remove("answer");
    search("answer") ? cout << "Yes\n" : cout << "No\n";

    return 0;
}