#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, i, p;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        int a[n];
        map<int, int> ump;
        map<int, int>::reverse_iterator it;
        multimap<int, int> mp;
        multimap<int, int>::reverse_iterator it1;

        for (i = 0; i < n; i++)
        {
            scanf("%d", &p);
            ump[p]++;
        }

        for (it = ump.rbegin(); it != ump.rend(); it++)
        {
            mp.insert({it->second, it->first});
            // printf("%d %d\n", it->first, it->second);
        }

        for (it1 = mp.rbegin(); it1 != mp.rend(); it1++)
        {
            for (i = 0; i < it1->first; i++)
                printf("%d ", it1->second);
                // printf("%d %d\n", it1->first, it1->second);
        }
        printf("\n");
    }

    return 0;
}