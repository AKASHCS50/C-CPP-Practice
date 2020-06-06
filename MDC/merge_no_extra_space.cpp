#include <bits/stdc++.h>

using namespace std;

int main()
{
int T, n, m, i, j, l, k;
scanf("%d", &T);
while(T--)
{
    scanf("%d %d", &n, &m);
    int a[n], b[m];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(j = 0; j < m; j++)
        scanf("%d", &b[j]);
    
    k = n;

    while(true)
    {
        k = ceil(k / 2);
        if(k == 0)
            break;
        // printf("k : %d\n", k);
        for(i = 0, j = i + k, l = 0; l < (m + n - k); j++, i++, l++)
        {
            // printf("i : %d  j : %d\n", i, j);
            if(j < n && i < n)
            {   
                if(a[i] > a[j])
                    swap(a[i], a[j]);
                // printf("Case 1\n");
            }
            else if(j >= n && i < n)
            {
                if(a[i] > b[j - n])
                    swap(a[i], b[j - n]);
                // printf("Case 2\n");
            }
            else if(j >= n && i >= n)
            {
                if(b[i - n] > b[j - n])
                    swap(b[i - n], b[j - n]);
                // printf("Case 3\n");
            }
            // for (int p = 0; p < n; p++)
            //     printf("%d ", a[p]);
            // for (int p = 0; p < m; p++)
            //     printf("%d ", b[p]);
            // printf("\n");
        }
    }
    
    if(n == 1)
    {
        if(a[0] > b[1])
            swap(a[0], b[1]);
    }
    else
    {
        if(a[0] > a[1])
            swap(a[0], a[1]);
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    for(j = 0; j < m; j++)
        printf("%d ", b[j]);
    printf("\n");
}

return 0;
}