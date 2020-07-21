#include <stdio.h>

void make_heap(int[], int);
void heapify(int[], int, int);

int main()
{
    int i, n,s;
    printf("Enter the size of heap ");
    scanf("%d", &n);
    int heap[n + 1];
    printf("Enter the elements of heap\n");
    for (i = 0; i < n; i++)
        scanf("%d", &heap[i]);

    make_heap(heap, n);

    printf("The heap is\n");
    for (i = 0; i < n; i++)
        printf("%d ", heap[i]);
    printf("\n");

    printf("Enter the element to be inserted ");
    scanf("%d", &s);

    heap[n] = s;
    n = n + 1;
    heapify(heap, n-1, n);

    printf("The heap after insertion is\n");
    for (i = 0; i < n; i++)
        printf("%d ", heap[i]);
    printf("\n");

    return 0;
}

void make_heap(int heap[], int n)
{
    int i, g = (n / 2) - 1;

    for (i = g; i >= 0; i--)
        heapify(heap, i, n);
}

void heapify(int heap[], int r, int n)
{
    int l = (2 * r) + 1;
    int h = (2 * r) + 2;
    int t, large = r;

    if ((l < n) && (heap[l] > heap[large]))
        large = l;

    if ((h < n) && (heap[h] > heap[large]))
        large = h;

    if (large != r)
    {
        t = heap[large];
        heap[large] = heap[r];
        heap[r] = t;

        heapify(heap, large, n);
    }
}