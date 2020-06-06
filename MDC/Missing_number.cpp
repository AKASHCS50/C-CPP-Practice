// O(n)
// #Arrays #Bit-magic

#include <bits/stdc++.h>

using namespace std;

int main()
{
int T, n, x, s, i;
scanf("%d", &T);
while(T--)
{
    scanf("%d", &n);
    x = n % 4;
    if(x == 0)
        s = n;
    else if(x == 1)
        s = 1;
    else if(x == 2)
        s = n+1;
    else
        s = 0;
    
    for(i = 0; i < (n - 1); i++)
    {
        scanf("%d", &x);
        s = s ^ x;
    }

    printf("%d\n", s);
}

return 0;
}