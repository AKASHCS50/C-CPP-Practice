#include <stdio.h>
#include <cmath>

using namespace std;

void EgyptianFraction(int, int);

int main()
{
    int nr, dr;

    printf("Enter the numerator ");
    scanf("%d", &nr);
    printf("Enter the denominator ");
    scanf("%d", &dr);
    if (nr > dr)
        return 0;
    EgyptianFraction(nr, dr);
    printf("\n");

    return 0;
}

void EgyptianFraction(int nr, int dr)
{
    int x;
    while (true)
    {
        if (dr == 0 || nr == 0)
            return;
            
        x = ceil((float)dr / (float)nr);
        nr = nr * x - dr;
        dr = x * dr;
        printf("%d/%d ", 1, x);
    }
}