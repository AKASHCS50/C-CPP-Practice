#include <bits/stdc++.h>

using namespace std;

int main()
{
int T, n, k, m, i;
scanf("%d", &T);
while(T--)
{
    scanf("%d", &k);

    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    sort(a, a+n);

    while(true)
    {
        m = a[n-1] - a[0];
        if(m <= k)
            break;
        else
        {
            a[n-1] -= k;
            a[0] += k;
            m = min()
       
        }
    }

    printf("%d\n", m);
}

return 0;
}