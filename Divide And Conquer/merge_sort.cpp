#include <stdio.h>

void mergeSort(int[], int, int);
void merge(int[], int, int, int);

int main()
{
    int n, i;
    printf("Enter the size of array ");
    scanf("%d", &n);

    printf("Enter the array elements\n");
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergeSort(a, 0, n - 1);

    printf("Sorted array is\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}

void mergeSort(int a[], int l, int h)
{
    if (l < h)
    {
        int m = (l + h) / 2;

        mergeSort(a, l, m);
        mergeSort(a, m + 1, h);

        merge(a, l, h, m);
    }
}

void merge(int a[], int l, int h, int m)
{
    int n1, n2, i, j, k;
    n1 = m - l + 1;
    n2 = h - m;
    int A[n1], B[n2];

    for (i = l, j = 0; j < n1; i++, j++)
        A[j] = a[i];

    for (i = m + 1, j = 0; j < n2; i++, j++)
        B[j] = a[i];

    for (i = 0, j = 0, k = l; ((i < n1) && (j < n2)); k++)
    {
        if (A[i] < B[j])
        {
            a[k] = A[i];
            i++;
        }
        else
        {
            a[k] = B[j];
            j++;
        }
    }

    while (i < n1)
    {
        a[k] = A[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = B[j];
        j++;
        k++;
    }
}