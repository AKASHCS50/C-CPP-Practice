#include <bits/stdc++.h>

using namespace std;

int partitionDiffcount(int[], int, int);

int main()
{
    int n, m, s = 0, i;
    printf("Enter the size of set ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of set\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s = s + a[i];
    }

    m = partitionDiffcount(a, n, s);
    printf("Minimun difference is %d\n", m);

    return 0;
}

int partitionDiffcount(int a[], int n, int s)
{
    int i, j, minm;
    bool dp[n + 1][s + 1];
    for (i = 0; i <= n; i++)
        dp[i][0] = true;
    for (i = 1; i <= s; i++)
        dp[0][i] = false;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= s; j++)
        {
            if (a[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    vector<int> v;
    vector<int>::iterator it;

    // for(i = 0; i <= n; i++)
    // {
    //     for(j = 0; j <= s; j++)
    //     {
    //         printf("%d ", dp[i][j]);
    //     }
    //     printf("\n");
    // }

    for (i = 0; i <= s / 2; i++)
    {
        if(dp[n][i])
            v.push_back(i);
    }

    minm = INT_MAX;
    for(it = v.begin(); it != v.end(); it++)
    {
        if((s - 2 * *it) < minm)
            minm = s - 2**it;
    }

    return minm;
}