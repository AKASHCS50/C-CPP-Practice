// Time Complexity : O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>

using namespace std;

void Sum_DP(long long int[], long long int, long long int);

int main()
{
    long long int T, n, S;
    scanf("%lld", &T);
    while (T--)
    {
        scanf("%lld %lld", &n, &S);
        long long int a[n], i;
        for (i = 0; i < n; i++)
            scanf("%lld", &a[i]);
        Sum_DP(a, n, S);
    }

    return 0;
}

void Sum_DP(long long int a[], long long int n, long long int S)
{
    long long int i, j = 0, curr_sum = 0;
    bool found = false;

    for (i = 0; i < n; i++)
    {
        curr_sum = curr_sum + a[i];

        while ((curr_sum > S) && (j <= i))
        {
            curr_sum = curr_sum - a[j];
            j++;
        }

        if (curr_sum == S)
        {
            printf("%lld %lld\n", j + 1, i + 1);
            found = true;
        }
    }
    if (found == false)
        printf("-1\n");
}