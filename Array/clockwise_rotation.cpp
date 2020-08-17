#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, temp;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        int a[n][n];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        for(int i = 0; i < n / 2; i++)
        {
            for(int j = 0; j < n - i - 1; j++)
            {
                swap(a[i][j], a[j][i]);
            }
        }

        for(int i = 0; i < n ; i++)
        {
            for(int j = 0; j < n / 2; j++)
            {
                swap(a[i][j], a[i][n - j - 1]);
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
        
    }

    return 0;
}