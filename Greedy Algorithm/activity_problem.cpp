#include<stdio.h>
#include<map>
#include<vector>

using namespace std;

int main()
{
    int n, m, i, count;
    count = 0;
    printf("Enter the total number of activities ");
    scanf("%d", &n);
    printf("Enter the start time\n");
    vector<int> v;
    for(i =0; i <n; i++)
    {
        scanf("%d", &m);
        v.push_back(m);
    }
    printf("Enter the finish time\n");
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
            // printf("%d %d %d\n", it->first, it->second, m);
            m = it->first;
            count++;
        }        
    }
    printf("Maximum possible activities are %d\n", count);

    return 0;
}                           
