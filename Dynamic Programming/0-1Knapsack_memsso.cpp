// O(n*W)

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int Recursive_Knapsack(int[], int[], int, int, vector<vector<int> >);

int main()
{
    int n, W, i, maxm;
    printf("Enter the number of items ");
    scanf("%d", &n);

    int wt[n], val[n];
    printf("Enter the weight of items\n");
    for (i = 0; i < n; i++)
        scanf("%d", &wt[i]);
    printf("Enter the value of items\n");
    for (i = 0; i < n; i++)
        scanf("%d", &val[i]);

    printf("Enter the capacity of Knapsack ");
    scanf("%d", &W);

    vector<vector<int> > dp(W + 1, vector<int>(n + 1, -1));

    maxm = Recursive_Knapsack(wt, val, W, n, dp);
    printf("Maximum profit is %d\n", maxm);

    return 0;
}

int Recursive_Knapsack(int wt[], int val[], int W, int n, vector<vector<int> > dp)
{

    if (n <= 0 || W <= 0)
        return 0;

    if (dp[n][W] != -1)
        return dp[n][W];

    if (wt[n - 1] <= W)
        return dp[n][W] = max((val[n - 1] + Recursive_Knapsack(wt, val, W - wt[n - 1], n - 1, dp)), Recursive_Knapsack(wt, val, W, n - 1, dp));
    else
        return dp[n][W] = Recursive_Knapsack(wt, val, W, n - 1, dp);
}