#include <bits/stdc++.h>

using namespace std;

int longSub(int[], int, int);

int main()
{
    int n, m, s = 0, i;
    printf("Enter the size of set ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of set\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    s = *max_element(a, a+n); 

    m = longSub(a, n, s+1);
    printf("Length of longest subsequence is %d\n", m);

    return 0;
}

int longSub(int a[], int n, int s)
{
    // if(n == 0)
    //     return 0;
    
    // if(a[n-1] < s)
    //     return 1 + longSub(a, n-1, a[n-1]);
    // else
    // {
    //     return max(longSub(a, n-1, s), longSub(a, n -1, a[n-1]));
    // }    

    int dp[n+1][s+1];

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= s; j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] =  0;
            
            else if(dp[i-1][j] < j)
                dp[i][j] = 1 + dp[i-1][a[i-1]];
            else
                dp[i][j] = max(dp[i-1][j], dp[i-1][a[i-1]]);

            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }

    return dp[n][s];
}