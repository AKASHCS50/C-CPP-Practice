// O(m * ( n - m + 1))

#include<bits/stdc++.h>

using namespace std;

void naiveSearch(char[], char[]);

int main()
{
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";

    naiveSearch(txt, pat);

    return 0;
}

void naiveSearch(char txt[], char pat[])
{
    int n, m, i, j, x, f;

    n = strlen(txt);
    m = strlen(pat);

    if(m > n)
        return;

    for(i = 0; i < n; i++)
    {
        if(txt[i] == pat[0])
        {
            f = 1;
            j = 0;
            for(x = i; x < m + i; x++, j++)
            {
                 if(x == n || txt[x] != pat[j])
                 {
                     f = 0;
                     break;
                 }
            }   
            if(f == 1)
                printf("String match found at index %d\n", i);
        }
    }
}