// O(n*W)

#include <stdio.h>
#include <algorithm>

using namespace std;

int Recursive_Knapsack(int[], int[], int, int);

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

    maxm = Recursive_Knapsack(wt, val, W, n);
    printf("Maximum profit is %d\n", maxm);

    return 0;
}

int Recursive_Knapsack(int wt[], int val[], int W, int n)
{

    static int dp[101][1001];

    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 1001; j++)
        {
            dp[i][j] = -1;
        }
    }

    if (n <= 0 || W <= 0)
        return 0;

    if (dp[n][W] != -1)
        return dp[n][W];

    if (wt[n - 1] <= W)
        return dp[n][W] = max((val[n - 1] + Recursive_Knapsack(wt, val, W - wt[n - 1], n - 1)), Recursive_Knapsack(wt, val, W, n - 1));
    else
        return dp[n][W] = Recursive_Knapsack(wt, val, W, n - 1);
}