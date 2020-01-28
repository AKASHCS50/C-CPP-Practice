// https : www.geeksforgeeks.org/maximum-subarray-sum-using-divide-and-conquer-algorithm/

#include <stdio.h>
#include <algorithm>

using namespace std;

int maxSubarraySum(int[], int, int);
int maxCrossingSum(int[], int, int, int);
int main()
{
    int n, i, sum = 0, maxs;

    printf("Enter the size of array ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the array elemets\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    maxs = maxSubarraySum(a, 0, n - 1);

    printf("Maximum subarray sum is %d\n", maxs);

    return 0;
}

int maxSubarraySum(int a[], int l, int h)
{
    int m, mx;
    m = (l + h) / 2;

    if (l == h)
        return a[l];

    mx = max(max(maxSubarraySum(a, l, m), maxSubarraySum(a, m + 1, h)), maxCrossingSum(a, l, m, h));
    return mx;
}

int maxCrossingSum(int a[], int l, int m, int h)
{
    int i, sum, left, right;

    sum = 0;
    left = INT_MIN;
    for(i = m; i >= l; i--)
    {
        sum = sum + a[i];
        left = max(left, sum);
    }

    sum = 0;
    right = INT_MIN;
    for (i = m + 1; i <= h; i++)
    {
        sum = sum + a[i];
        right = max(right, sum);
    }

    return (left + right); 
}