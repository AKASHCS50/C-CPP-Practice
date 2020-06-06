// O(n^2)
// #Sorting two-pointer-algorithm


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, i, count;
    scanf("%d", &T);
    while (T--)
    {
        count = 0;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        sort(a, a + n);

        for (i = 2; i < n; i++)
        {
            int p = i - 1, q = 0, s;
            while (q < p)
            {
                s = a[p] + a[q];
                if (s == a[i])
                {
                    count++;
                    q++;
                    p--;
                }
                else if (s < a[i])
                    q++;
                else
                    p--;
            }
        }

        if (count == 0)
            count = -1;

        printf("%d\n", count);
    }

    return 0;
}