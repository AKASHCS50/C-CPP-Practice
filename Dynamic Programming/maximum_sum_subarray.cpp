// https : //www.geeksforgeeks.org/largest-sum-contiguous-subarray/
// Kadane's Algorithm


#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, sum = 0, maxs = 0;

    printf("Enter the size of array ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the array elemets\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (sum < 0)
            sum = 0;
        maxs = max(sum, maxs);
    }

    if (maxs == 0)
    {
        maxs = a[0];
        for (i = 1; i < n; i++)
        {
            if (a[i] > maxs)
                maxs = a[i];
        }
    }

    printf("Maximum subarray sum is %d\n", maxs);

    return 0;
}