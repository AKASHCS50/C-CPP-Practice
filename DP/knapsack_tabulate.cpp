#include <bits/stdc++.h>

using namespace std;

struct item
{
    int wt;
    int val;
};

int main()
{
    int n, W;

    scanf("%d", &n);

    struct item it[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &it[i].wt);

    for (int i = 0; i < n; i++)
        scanf("%d", &it[i].val);

    scanf("%d", &W);

    int dp[n + 1][W + 1];

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= W; j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(it[i - 1].wt <= j)
                dp[i][j] = max(dp[i - 1][j], it[i - 1].val + dp[i - 1][j - it[i - 1].wt]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    int profit = dp[n][W];

    printf("%d\n", profit);

    return 0;
}