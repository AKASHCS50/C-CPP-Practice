#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, x, mx = 0, count = 0;
    
    scanf("%lld", &n);
    for(long long int i = 0; i < n; i++)
    {
        scanf("%lld", &x);
        if(x >= mx)
        {
            mx = x;
        }
        else
        {
            count = count + mx - x;
        }
    }

    printf("%lld\n", count);

    return 0;
}