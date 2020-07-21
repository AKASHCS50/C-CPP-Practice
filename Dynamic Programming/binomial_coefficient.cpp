#include <bits/stdc++.h>

using namespace std;

int binCoeff(int, int);

int main()
{
    int n, r, b;
    printf("Enter the value of n ");
    scanf("%d", &n);
    printf("Enter the value of r ");
    scanf("%d", &r);

    b = binCoeff(n, r);
    printf("The value of binomial coefficient is %d\n", b);

    return 0;
}

int binCoeff(int n, int r)
{

    int dp[n + 1][r + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= r; j++)
        {
            if (j == 0 || i == j)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
        }
    }

    return dp[n][r];
}