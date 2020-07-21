// O(nlog(n))

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, count, i;
    scanf("%d", &T);
    while (T--)
    {
        count = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
            count += __builtin_popcount(i);
        printf("%d\n", count);
    }

    return 0;
}