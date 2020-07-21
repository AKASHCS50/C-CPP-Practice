// O(m * ( n - m + 1))

#include<bits/stdc++.h>

using namespace std;

void naiveSeacrh(char[], char[]);

int main()
{
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";

    naiveSearch(txt, pat);

    return 0;
}

void naiveSeacrh(char txt[], char pat[])
{
    int n, m;

    n = strlen(txt);
    m = strlen(pat);

    
}