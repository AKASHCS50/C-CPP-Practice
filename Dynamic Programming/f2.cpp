#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, m;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        char str[n], a[n], b[n];
        scanf("%s", str);
        m = 0;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '0')
            {
                a[i] = '0';
                b[i] = '0';
            }
            else if (str[i] == '1')
            {
                if(m == 0)
                {
                    a[i] = '0';
                    b[i] = '1';
                    m = 1;
                }
                else
                {
                    a[i] = '1';
                    b[i] = '0';
                }
            }
            else
            {
                if(m == 0)
                {
                    a[i] = '1';
                    b[i] = '1';
                }
                else
                {
                    a[i] = '2';
                    b[i] = '0';
                }
            }
        }
        a[0] = '1';
        b[0] = '1';
        for(int i = 0; i < n; i++)
        {
            printf("%c", a[i]);
        }
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("%c", b[i]);
        }
        printf("\n");
    }

    return 0;
}