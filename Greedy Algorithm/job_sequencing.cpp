#include <stdio.h>
#include <algorithm>

using namespace std;

struct job
{
    char job_id;
    int deadline;
    int profit;
};

bool jobCompare(job j1, job j2)
{
    return (j1.profit > j2.profit);
}

int main()
{
    int n, p, i, j;

    printf("Enter the total number of jobs ");
    scanf("%d", &n);

    struct job jb[n];
    bool slot[n];
    for(i = 0; i < n; i++) 
        slot[i] = false;

    printf("Enter the jobs\n");
    for (i = 0; i < n; i++)
        scanf(" %c %d %d", &jb[i].job_id, &jb[i].deadline, &jb[i].profit);

    sort(jb, jb + n, jobCompare);

    printf("Possible jobs are ");

    p = 0;
    for (i = 0; i < n; i++)
    {
        for(j = min(jb[i].deadline, n)-1; j>=0;  j--)
        {
            if(slot[j] == false)
            {
                slot[j] = true;
                printf("%c ", jb[i].job_id);
                p = p + jb[i].profit;
                break;
            }
        }
    }
    printf("\nTotal profit is %d\n", p);

    return 0;
}