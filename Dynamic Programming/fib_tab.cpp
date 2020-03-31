// O(n)

#include <stdio.h>

long long int fib(long long int);

int main()
{
    long long int n, f;

    printf("Enter the number ");
    scanf("%lld", &n);

    f = fib(n);
    printf("The fibonacci number is %lld\n", f);

    return 0;
}

long long int fib(long long int n)
{
    long long int dp[n+1];

    for(int i = 0; i <= n; i++)
    {
        if(i <= 1)
            dp[i] = 1;
        else
            dp[i] = dp[i-1]+dp[i-2];
    }

    return dp[n];
}