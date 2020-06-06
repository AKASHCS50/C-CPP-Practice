#include <bits/stdc++.h>

using namespace std;

int main()
{
int T, n, i, min_index, max_index, max_element;
scanf("%d", &T);
while(T--)
{
    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min_index = 0;
    max_index = n - 1;
    max_element = a[n-1] + 1;

    for(i = 0; i < n; i++)
    {
        if((i % 2) == 0)
        {
            a[i] += (a[max_index] % max_element) * max_element;
            max_index--;
        }
        else
        {
            a[i] += (a[min_index] % max_element) * max_element;
            min_index++;
        }  
    }

    for(i = 0; i < n; i++)
    {
        a[i] = a[i] / max_element;
        printf("%d ", a[i]);
    }
    printf("\n");

}

return 0;
}