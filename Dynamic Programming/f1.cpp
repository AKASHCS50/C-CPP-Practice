#include <bits/stdc++.h>

using namespace std;

int term(int n)
{
    int x = (((1) + (double)sqrt(1 + (8 * n))) / 2);
    return x;
}

int findNumber(int n)
{
    n--;

    int i = 1;
    while (n >= 0)
    {
        n -= i;
        ++i;
    }

    return (n + i);
}

int main()
{
    int T, n, x, m, p;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &n, &x);
        char str[n];
        for (int i = 0; i < n; i++)
            str[i] = 'a';
        m = term(x - 1);
        // printf("%d\n", m);
        p = findNumber(x);
        if ((n - (m + 1)) >= 0)
            str[n - (m + 1)] = 'b';
        if ((n - p) >= 0)
            str[n - p] = 'b';
        for (int i = 0; i < n; i++)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }

    return 0;
}