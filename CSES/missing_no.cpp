#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, x;

    scanf("%d", &n);

    if((n % 4) == 0)
        p = n;
    else if((n % 4) == 1)
        p = 1;
    else if((n % 4) == 2)
        p = n + 1;
    else
        p = 0;

    for(int i = 0; i < (n - 1); i++)
    {
        scanf("%d", &x);
        p = p ^ x;
    }

    printf("%d\n", p);

    return 0;
}