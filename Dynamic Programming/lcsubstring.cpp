#include <bits/stdc++.h>

using namespace std;

int lcs(string, int, string, int);

int main()
{
    string x, y;
    int a, b;
    printf("Enter the first string ");
    cin >> x;
    printf("Enter the second string ");
    cin >> y;
    a = x.length();
    b = y.length();
    printf("The value of lcs is %d\n", lcs(x, a, y, b));

    return 0;
}

int lcs(string x, int n, string y, int m)
{

    int dp[n + 1][m + 1];
    int result = 0;

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            if(i == 0 || j == 0)
                dp[i][j] = 0;
            if(x[i-1] == y[j-1])
            {
                dp[i][j] =  1+dp[i-1][j-1];
            }
            else 
            {
                dp[i][j] = 0;
            }
            result = max(result, dp[i][j]);
        }
    }

    return result;
}