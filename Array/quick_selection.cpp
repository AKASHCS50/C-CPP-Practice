#include <bits/stdc++.h>

using namespace std;

int quickSelection(int[], int, int, int);
int partition(int[], int, int);

int main()
{
    int t, n, k, d;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        
        scanf("%d", &k);

        d = quickSelection(a, 0, n - 1, k);
        printf("%d\n", d);
    }
    return 0;
}


int partition(int a[], int l, int h)
{
    int i, j, pivot = a[h];

    i = l;
    j = 0;

    for(int j = l; j < h; j++)
    {
        if(a[j] <= pivot)
        {
            swap(a[i], a[j]);
            i++;
        }
    }

    swap(a[i], a[h]);

    return i;
}


int quickSelection(int a[], int l, int h, int k)
{
    if(k > 0 && k <= (h - l + 1))
    {
        int p = partition(a, l, h);

        if((p - l) == (k - 1))
            return a[p];
        else if((p - l) > (k - 1))
            return quickSelection(a, l, p - 1, k);
        else
            return quickSelection(a, p + 1, h, k - p + l - 1);
    }

    return INT_MAX;
}