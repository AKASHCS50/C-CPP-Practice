#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, m, i, j, k, count;
    scanf("%d", &T);
    while (T--)
    {
        count = 0;
        scanf("%d %d", &n, &m);
        int a[n], b[m];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < m; i++)
            scanf("%d", &b[i]);

        sort(a, a + n);

        for (i = 0; i < m; i++)
        {
            if (b[i] == 1)
            {
                for (j = 0; j < n; j++)
                {
                    if (a[j] != 1)
                        break;
                }
                count += n - j;
            }
            else if (b[i] == 2)
            {
                for (j = 0; j < n; j++)
                {
                    if (a[j] == 1)
                        count++;
                    else if (a[j] > 4)
                        break;
                }
                count += n - j;
            }
            else
            {
                int l = 0, h = n - 1, mid, x = n;

                while (l <= h)
                {
                    mid = (l + h) / 2;
                    if (a[mid] <= b[i])
                        l = mid + 1;
                    else
                    {
                        x = h;
                        h = mid - 1;
                    }
                }

                count = count + n - x;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}