// O(n)

#include <stdio.h>

long long int fib(long long int, long long int[]);

int main()
{
    long long int n, f;

    printf("Enter the number ");
    scanf("%lld", &n);

    long long int dp[n + 1];

    for (int i = 2; i <= n; i++)
        dp[i] = -1;

    f = fib(n, dp);
    printf("The fibonacci number is %lld\n", f);

    return 0;
}

long long int fib(long long int n, long long int dp[])
{
    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}