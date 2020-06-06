// O(n)
// #Array #DP

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, i, s, mx;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        mx = 0;
        s = 0;

        for (i = 0; i < n; i++)
        {
            s = s + a[i];

            mx = max(s, mx);

            if (s < 0)
                s = 0;
        }

        if(mx == 0)
        {
            mx = a[0];
            for(i = 1; i < n; i++)
            {
                mx = max(mx, a[i]);
            }
        }

        printf("%d\n", mx);
    }

    return 0;
}