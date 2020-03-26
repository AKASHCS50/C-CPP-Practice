// O(n*s)

#include <stdio.h>

// O(2^n)
bool subsetSum(int[], int, int);

int main()
{
    int n, s, m, i;
    printf("Enter the size of set ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of set\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the required sum ");
    scanf("%d", &s);

    if (subsetSum(a, n, s))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

// Exponential Recursive solution

// bool subsetSum(int a[], int n, int s)
// {
//     if(s== 0)
//         return true;
//     else if(n == 0)
//         return false;

//     if(a[n-1] <= s)
//     {
//         if(subsetSum(a, n-1, s - a[n-1])  || subsetSum(a, n-1, s))
//             return true;
//         else
//             return false;
//     }
//     else
//     {
//         if (subsetSum(a, n - 1, s))
//             return true;
//         else
//             return false;
//     }
// }

bool subsetSum(int a[], int n, int s)
{

    int i, j;
    bool dp[n + 1][s + 1];
    for (i = 0; i <= s; i++)
    {
        dp[0][i] = false;
    }
    for (i = 0; i <= n; i++)
    {
        dp[i][0] = true;
    }

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
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][s];
}