#include <bits/stdc++.h>

using namespace std;

struct item
{
    int wt;
    int val;
};

int knapsackMemoized(struct item it[], int n, int W, vector<vector<int> > &dp)
{
    if(dp[n][W] != -1)
        return dp[n][W];

    if (n == 0 || W == 0)
        return dp[n][W] = 0;

    if (it[n - 1].wt <= W)
        return dp[n][W] = max(knapsackMemoized(it, n - 1, W, dp), it[n - 1].val + knapsackMemoized(it, n - 1, W - it[n - 1].wt, dp));
    else
        return dp[n][W] = knapsackMemoized(it, n - 1, W, dp);
}

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

    vector<vector<int> > dp(n + 1, vector<int>(W + 1, -1));

    int profit = knapsackMemoized(it, n, W, dp);

    printf("%d\n", profit);

    return 0;
}