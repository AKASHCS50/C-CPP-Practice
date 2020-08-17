#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t, n, l, h, k, p, q, cnt;
    scanf("%d", &t);
    
    while (t--)
    {
        cnt = 0;
        
        scanf("%d %d", &n, &k);
        
        int a[n];
        
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        
        sort(a, a + n);
        
        l = 0;
        h = n - 1;
        
        while(l < h)
        {
            if(a[l] + a[h] == k)
            {
                p = l;
                q = h;
                while((p + 1) < h && a[p + 1] + a[h] == k)
                {
                    p++;
                    cnt++;
                }
                while(l < (q - 1) && a[l] + a[q - 1] == k)
                {
                    q--;
                    cnt++;
                }
                  
                l++;
                h--;
                cnt++;
            }
            else if(a[l] + a[h] < k)
            {
                l++;
            }
            else
            {
                h--;
            }
        }        
        
       printf("%d\n", cnt);
    }

    return 0;
}