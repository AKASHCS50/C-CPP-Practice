#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, m, i, count;
    scanf("%d", &T);
    while(T--)
    {
        count = 0;
        scanf("%d", &n);
        vector<int> v;
        for(i =0; i <n; i++)
        {
            scanf("%d", &m);
            v.push_back(m);
        }
        multimap<int, int> mp;
        multimap<int, int> ::iterator it;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &m);
            mp.insert({m, v[i]});
        }
        v.clear();
        m = 0;
        for(it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second >= m)
            {
                m = it->first;
                count++;
            }        
        }
        printf("%d\n", count);
    }
    return 0;
}                           
