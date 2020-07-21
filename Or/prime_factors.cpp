// https: //www.geeksforgeeks.org/prime-factor/

#include <stdio.h>
#include <math.h>

void Primefactors(int);

int main()
{
    int n;

    printf("Enter the number ");
    scanf("%d", &n);

    Primefactors(n);

    return 0;
}

void Primefactors(int n)
{
    int i;

    printf("1 ");

    while ((n % 2) == 0)
    {
        printf("2 ");
        n = n / 2;
    }

    for (i = 3; i <= sqrt(n); i = (i + 2))
    {
        while ((n % i) == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }

    if (n > 2)
        printf("%d ", n);
    printf("\n");
}