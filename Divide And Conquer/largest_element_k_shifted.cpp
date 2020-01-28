#include<stdio.h>
#include<algorithm>

using namespace std;

int largestElement(int[], int, int);

int main()
{
    int i, n, k;

    printf("Enter the size of array ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    k = largestElement(a, 0, n - 1);

    printf("Largest element is %d\n", k);

    return 0;
}

int largestElement(int a[], int l, int h)
{
    int m, mx;
    m = (l + h) / 2;

    if(l == h)
        return a[l];

    mx = max(largestElement(a, l, m), largestElement(a, m + 1, h));
    return mx;
}