#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, l, h;
    
    scanf("%d", &t);
    
    while (t--)
    {
        scanf("%d", &n);
        
        int a[n];
        
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        
        l = 0;
        h = n -1;
        
        if(n == 1)
        {
            return a[0];
            continue;
        }
        
        if(n == 2)
        {
            cout<<min(a[0], a[1])<<endl;
            continue;
        }
        
        if(a[n - 1] > a[0] && a[n - 1] > a[n - 2])
        {
            cout<<a[n - 1]<<endl;
            continue;
        }
        
        while(l <= h)
        {
            int m = l + (h - l) / 2;
            
            if(a[m] > a[m - 1] && a[m] > a[m + 1])
            {
                cout<<a[m]<<endl;
                break;
            }
            else if(a[m] < a[m - 1])
            {
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        // cout<<"here\n";
        
    }

    return 0;
}