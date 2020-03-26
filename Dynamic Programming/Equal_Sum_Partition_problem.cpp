#include <stdio.h>


bool equalPartition(int[], int, int);

int main()
{
    int n, s = 0, m, i;
    printf("Enter the size of set ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of set\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s = s + a[i];
    }

    if ((s%2 == 0) && (equalPartition(a, n, s/2)))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}


bool equalPartition(int a[], int n, int s)
{

    int i, j;
    bool dp[n + 1][s + 1];
    for (i = 0; i <= s; i++)
    {
        dp[0][i] = false;
    }
    for (i = 0; i <= n; i++)
    {
        dp[i][0] = false;
    }

    dp[0][0] = true;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= s; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][s];
}