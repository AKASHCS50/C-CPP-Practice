#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, i, x, y, z;
    scanf("%d", &T);
    while (T--)
    {
        x = 0;
        y = 0;
        z = 0;
        scanf("%d", &n);

        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] == 0)
                x++;
            else if (a[i] == 1)
                y++;
            else
                z++;
        }

        i = 0;

        while (x--)
        {
            a[i] = 0;
            i++;
        }
        while (y--)
        {
            a[i] = 1;
            i++;
        }
        while (z--)
        {
            a[i] = 2;
            i++;
        }

        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }

    return 0;
}