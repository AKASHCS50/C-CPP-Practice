#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, m, i, j, p;
    scanf("%d", &T);
    while (T--)
    {
        map<int, int> hash;
        map<int, int>::iterator it;
        scanf("%d %d", &n, &m);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &p);
            hash[p]++;
        }

        for (i = 0; i < m; i++)
        {
            scanf("%d", &p);
            for (j = 0; j < hash[p]; j++)
                printf("%d ", p);

            hash.erase(p);
        }

        for (it = hash.begin(); it != hash.end(); it++)
        {
            for (j = 0; j < it->second; j++)
                printf("%d ", it->first);
        }

        printf("\n");
    }

    return 0;
}