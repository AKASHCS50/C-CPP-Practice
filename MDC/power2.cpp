#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int T, n, x, y;
    scanf("%llu", &T);
    while (T--)
    {
        scanf("%llu", &n);
        if(n == 0)
        {
            printf("NO\n");
            continue;
        }
        x = floor(log2(n));
        y = ceil(log2(n));
        if(x == y)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}