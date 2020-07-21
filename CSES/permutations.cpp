#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, x, y, z;

    scanf("%lld", &n);
    if(n == 1)
        printf("1\n");
    else if((n == 2) || (n == 3))
        printf("NO SOLUTION\n");
    else
    {
        if((n % 2) == 0)
        {
            for(int i = 2 ; i <= n; i+=2)
                printf("%d ", i);
            for (int i = 1; i < n; i += 2)
                printf("%d ", i);
        }
        else
        {
            for (int i = n; i > 0; i -= 2)
                printf("%d ", i);
            for (int i = (n - 1); i > 0; i -= 2)
                printf("%d ", i);
        }
        printf("\n");
    }
    

    return 0;
}