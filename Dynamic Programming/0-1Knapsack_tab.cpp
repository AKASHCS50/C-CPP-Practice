// O(n*W)

#include <stdio.h>
#include <algorithm>

using namespace std;

int knapSack(int[], int[], int, int);

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

    maxm = knapSack(wt, val, n, W);
    printf("Maximum profit is %d\n", maxm);

    return 0;
}

int knapSack(int wt[], int val[], int n, int W)
{
    int i, j, w, res;
    int dp[n + 1][W + 1];

    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    // for(i = 0; i <= n; i++)
    // {
    //     for (j = 0; j <= W; j++)
    //     {
    //         printf("%d ", dp[i][j]);
    //     }
    //     printf("\n");
    // }

    res = dp[n][W];
    w = W;

    for(i = n; i > 0 && res > 0; i--)
    {
        if(res = dp[i-1][w])
            continue;
        else
        {
            printf("%d ", wt[i-1]);
            res = res - val[i - 1];
            w = w - wt[i-1];
        }
    }
    printf("\n");


    return dp[n][W];
}