// https://www.geeksforgeeks.org/ugly-numbers/

#include<stdio.h>

int main()
{
    int n, i, i2 = 0, i3 = 0, i5 = 0, count = 1, n2, n3, n5, next;
    
    printf("Enter the number ");
    scanf("%d", &n);
    int ugly[n];
    
    ugly[0] = 1;

    n2 = ugly[i2] * 2;
    n3 = ugly[i3] * 3;
    n5 = ugly[i5] * 5;

    while(count < n)
    {
        next = (n2 < n3) ? ((n2 < n5) ? n2 : n5) : ((n3 < n5) ? n3 : n5);
        ugly[count] = next;

        if(next == n2)
        {
            i2++;
            n2 = ugly[i2] * 2;
        }
        if (next == n3)
        {
            i3++;
            n3 = ugly[i3] * 3;
        }
        if(next == n5)   // If is used to avoid repetition as in n = 7
        {
            i5++;
            n5 = ugly[i5] * 5;
        }
        count++;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", ugly[i]);
    }
    printf("\n");

    return 0;
}