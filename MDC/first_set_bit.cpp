#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, x, count, i;
    scanf("%d", &T);
    while (T--)
    {
        count = 0;
        scanf("%d", &n);
        if (n == 0)
            printf("0\n");
        else if((n % 2) == 1)
            printf("1\n");
        else
        {
            while((n % 2) != 1)
            {
                n = n / 2;
                count++;
            }
            printf("%d\n", count+1);
        }
    }

    return 0;
}