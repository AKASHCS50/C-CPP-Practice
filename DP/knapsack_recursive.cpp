#include <bits/stdc++.h>

using namespace std;

struct item
{
    int wt;
    int val;
};

int knapsackRecursive(struct item it[], int n, int W)
{
    if(n == 0 || W == 0)
        return 0;

    if(it[n - 1].wt <= W)
        return max(knapsackRecursive(it, n - 1, W), it[n - 1].val + knapsackRecursive(it, n - 1, W - it[n - 1].wt));
    else
        return knapsackRecursive(it, n - 1, W);
}

int main()
{
    int n, W;

    scanf("%d", &n);

    struct item it[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &it[i].wt);

    for (int i = 0; i < n; i++)
        scanf("%d", &it[i].val);

    scanf("%d", &W);    

    int profit = knapsackRecursive(it, n, W);

    printf("%d\n", profit);

    return 0;
}