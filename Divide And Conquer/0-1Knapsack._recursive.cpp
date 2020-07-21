// O(2^n)
#include<bits/stdc++.h>

using namespace std;

int Recursive_Knapsack(int[], int[], int, int);

int main()
{
    int n, W, i, f;
    printf("Enter the number of items ");
    scanf("%d", &n);

    int wt[n], val[n];

    printf("Enter the weight and value of items\n");
    for(i = 0; i < n; i++)
        scanf("%d %d", &wt[i], &val[i]);

    printf("Enter the weight of knapsack ");
    scanf("%d", &W);

    f = Recursive_Knapsack(wt, val, W, n);

    printf("The maximum profit is %d\n", f);

    return 0;
}

int Recursive_Knapsack(int wt[], int val[], int W, int n)
{
    if(n == 0)
    return 0;

    if(W >= wt[n-1])
        return max(val[n-1] + Recursive_Knapsack(wt, val, W - wt[n-1], n - 1), Recursive_Knapsack(wt, val, W, n - 1));
    else
        return Recursive_Knapsack(wt, val, W, n - 1);
}