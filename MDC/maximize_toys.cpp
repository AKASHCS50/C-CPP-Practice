#include <bits/stdc++.h>

using namespace std;

int main()
{
int T, n, k, count, i;
scanf("%d", &T);
while(T--)
{
    count = 0;
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, a+n);

    for(i = 0; i < n; i++)
    {
        if(a[i] <= k)
        {
            k = k - a[i];
            count++;
        }
        else
            break;
    }

    printf("%d\n", count);
}

return 0;
}