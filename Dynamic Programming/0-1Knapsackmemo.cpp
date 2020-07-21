// O(n*W)

#include <bits/stdc++.h>

using namespace std;

int knapsackMemo(int[], int[], int, int, vector<vector<int> >);

int main()
{
    int n, W, i, maxm;
    printf("Enter the number of items ");
    scanf("%d", &n);

    int wt[n], val[n];
    vector<vector<int> > dp(W + 1, vector<int>(n + 1, -1));
    printf("Enter the weight of items\n");
    for (i = 0; i < n; i++)
        scanf("%d", &wt[i]);
    printf("Enter the value of items\n");
    for (i = 0; i < n; i++)
        scanf("%d", &val[i]);

    printf("Enter the capacity of Knapsack ");
    scanf("%d", &W);

    maxm = knapsackMemo(wt, val, W, n, dp);
    printf("Maximum profit is %d\n", maxm);

    return 0;
}

int knapsackMemo(int wt[], int val[], int W, int n, vector<vector<int> > dp)
{

    if (dp[n][W] != -1)
        return dp[n][W];

    else
    {
        if (n <= 0 || W <= 0)
            return 0;

        if (wt[n - 1] <= W)
            return dp[n][W] = max(val[n - 1] + knapsackMemo(wt, val, W - wt[n - 1], n - 1, dp), knapsackMemo(wt, val, W, n - 1, dp));
        else
            return dp[n][W] = knapsackMemo(wt, val, W, n - 1, dp);
    }

    if (n <= 0 || W <= 0)
        return 0;
}