#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, m, x, c;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &m, &n);
        x = m ^ n;
        c = log2(x & -x) + 1;

        printf("%d\n", c);
    }

    return 0;
}