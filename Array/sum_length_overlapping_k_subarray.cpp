#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k, c, m, x;
    scanf("%d", &t);
    while (t--)
    {
        m = 0;
        c = 0;
        x = 0;
        
        scanf("%d", &n);
        
        int a[n];
        
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
            
        scanf("%d", &k);
        
        for(int i = 0; i < n; i++)
        {
           if(a[i] < k)
           {
               c++;
           }
           else if(a[i] == k)
           {
               c++;
               x = 1;
           }
           else
           {
                if(x == 1)
                {
                    m += c;
                }
               c = 0;
               x = 0;
           }
           
        }
        
        if(x == 1)
           {
               m += c;
           }
        
        printf("%d\n", m);
    }

    return 0;
}