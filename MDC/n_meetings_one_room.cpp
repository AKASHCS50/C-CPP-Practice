// #Greedy

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, m, i;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        vector<int> v;
        for(i =0; i <n; i++)
        {
            scanf("%d", &m);
            v.push_back(m);
        }
        multimap<int, pair<int, int>> mp;
        multimap<int, pair<int, int>> ::iterator it;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &m);
            mp.insert({m, make_pair(v[i], i+1)});
        }
        v.clear();
        m = 0;
        for(it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second.first >= m)
            {
                m = it->first;
                printf("%d ", it->second.second);
            }        
        }
        printf("\n");
    }   
    return 0;
}                           
