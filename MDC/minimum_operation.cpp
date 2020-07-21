// O(n)
// #DP #Greedy

#include <bits/stdc++.h>

using namespace std;

int minim_optn(int, int, int[]);

int main()
{
    int T, n, a, r, p;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        int dp[n+1];
        for(int i = 0; i <= n; i++)
            dp[i] = -1;
        a = 1 + minim_optn(n, 1, dp);
        printf("%d\n", a);

    }

    return 0;
}

int minim_optn(int n, int x, int dp[])
{
    if(dp[x] != -1)
        return dp[x];
        
    if(x == n)
        return dp[x] = 0;
    else if((2*x) <= n)
    {
        return dp[x] = 1 + min(minim_optn(n, x+1, dp), minim_optn(n, 2*x, dp));
    }
    else
    {
        return dp[x] = 1 + minim_optn(n, x+1, dp);
    }

}