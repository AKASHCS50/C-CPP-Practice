#include <bits/stdc++.h>

using namespace std;

int mcm(int[], int, int);

int main()
{

    int n, m, i;
    printf("Enter the size of array ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    m = mcm(a, 1, n-1);

    printf("The value of mcm is %d\n", m);

    return 0;
}

int mcm(int a[], int i, int j)
{
    if(i >= j)
        return 0;
    
    for(int k = i; k < j; k++)
    {

    }

}